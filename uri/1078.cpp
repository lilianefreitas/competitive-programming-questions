#include <bits/stdc++.h>
using namespace std;

int n, resultado;

int main() {
    scanf("%d", &n);

    for(int i = 1; i < 11; i++) {
        resultado = n * i;
            printf("%d x %d = %d\n", i, n, resultado);
    }

    return 0;
}
