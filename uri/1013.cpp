#include <bits/stdc++.h>
using namespace std;

int a, b, c, resultado;

int main() {
    scanf("%d %d %d", &a, &b, &c);

    resultado = max({a, b, c});

    printf("%d eh o maior\n", resultado);

    return 0;
}
