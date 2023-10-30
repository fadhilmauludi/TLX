#include <iostream>

using namespace std;

int main() {
    int n, m, k, a, b;
    scanf("%d %d %d %d %d", &n, &m, &k, &a, &b);
    int he = n/(3*m);
    int eh = a/(2*k);
    int ha = b/k;
    if (eh<he) he=eh;
    if (ha<he) he=ha;
    printf("%d\n", 3*he);

    return 0;
}