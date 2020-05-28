#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main () {
    scanf("%d%d%d", &a, &b, &c);
    
    int maior = max (a, max (b, c));
    int menor = min (a, min (b, c));
    int meio = (a + b + c) - maior - menor;

    printf("%d\n", menor);
    printf("%d\n", meio);
    printf("%d\n", maior);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}
