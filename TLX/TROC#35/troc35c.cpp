#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 200001;

int n;
long long a[MAXN], s[MAXN];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%lld", &a[i]);
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
        s[i] = s[i-1] + a[i];
    long long answer = 0;
    for (int l = 1; l <= n; l++) {
        answer = max(answer, a[l] - s[l - 1] + 1);
    }
    printf("%lld\n", answer);
}