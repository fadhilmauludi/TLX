#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 200005;

int arr[MAXN], x;
int table[MAXN][18];
int logg[MAXN];
vector<int> mp[MAXN];

long long dc(int l, int r, int hi) {
    if (l >= r) return 0;
    if (l + 1 == r) return hi;
    long long ma = 0;
    vector<int> v;
    v.push_back(l);
    int de = r - l - 1;
    int xd = max(table[l + 1][logg[de]], table[r - 1 - (1 << logg[de]) + 1][logg[de]]);
    int it = lower_bound(mp[xd].begin(), mp[xd].end(), l + 1) - mp[xd].begin();
    for (; it < mp[xd].size(); it++) {
        if (mp[xd][it] >= r) break;
        v.push_back(mp[xd][it]);
    }
    v.push_back(r);
    long long all = (hi - xd);
    if (x < l || x >= r) {
        if (v.size() != 2) {
            for (int i = 0; i < v.size() - 1; i++) {
                all += dc(v[i], v[i + 1], xd);
            }
        }
        return all;
    } else {
        long long tmp1 = all, tmp2 = all;
        if (v.size() != 2) {
            for (int i = 0; i < v.size() - 1; i++) {
                long long a33 = dc(v[i], v[i + 1], xd);
                if (v[i] <= x) {
                    tmp1 += a33;
                }
                if (v[i + 1] > x) {
                    tmp2 += a33;
                }
            }
        }
        return max(tmp1, tmp2);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n >> x;
    arr[0] = 200000;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    arr[n + 1] = 200000;
    for (int i = 0; i <= n + 1; i++) {
        mp[arr[i]].push_back(i);
        table[i][0] = arr[i];
    }
    for (int j = 1; j < 18; j++) {
        for (int i = 0; i <= n + 1 - (1 << j) + 1; i++) {
            table[i][j] = max(table[i][j - 1], table[i + (1 << (j - 1))][j - 1]);
        }
    }
    logg[1] = 0;
    for (int i = 2; i <= 200004; i++) {
        logg[i] = logg[i / 2] + 1;
    }
    cout << dc(0, n + 1, 200000) << endl;
    return 0;
}
