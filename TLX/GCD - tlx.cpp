#include <iostream>
#include <vector>

typedef long long ll;

#define loop(u) for (int i = 0; i < u; i++)
#define loopv(v, u) for (int v = 0; v < u; v)

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    // Calculate and print the results based on the given formula
    cout << 2 * n - 1 << " " << 2 * n + 1 << endl;

    return 0;
}
