#include <bits/stdc++.h>
using namespace std;

int v, p, q, r, resultado;

int main() {
    scanf(" %d %d", &v, &p);

    q = v / p;
    r = v % p;

    for(int i = 0; i < p; i++) {
        if (r > 0) {
            resultado = q + 1;
            r--;
            printf("%d\n", resultado);

        } else {
            resultado = q;
            printf("%d\n", resultado);

        }
    }

    return 0;
}
