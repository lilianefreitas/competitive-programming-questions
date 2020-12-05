#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main() {
    scanf("%d%d%d", &a, &b, &c);

    int A, B, C;
    int soma = a + b + c;

    C = max({a,b,c});
    A = min({a,b,c});
    B = soma - A - C;

    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}
