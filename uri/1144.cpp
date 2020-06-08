#include <bits/stdc++.h>
using namespace std;

int n, a, b, c, d, e, f;

int main () {
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        a = i;
        b = i * i;
        c = i * i * i;
        d = i;
        e = (i * i) + 1;
        f = (i * i * i) + 1;

        printf("%d %d %d\n", a, b, c);
        printf("%d %d %d\n", d, e, f);
    }

    return 0;
}
