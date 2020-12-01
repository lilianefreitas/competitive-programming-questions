#include <bits/stdc++.h>
using namespace std;

int valor;

int main() {
    scanf("%d", &valor);

    printf("%d\n", valor);

    int qtd100 = valor / 100;
    valor %= 100;

    int qtd50 = valor / 50; 
    valor %= 50;

    int qtd20 = valor / 20;
    valor %= 20;

    int qtd10 = valor / 10;
    valor %= 10;

    int qtd5 = valor / 5;
    valor %= 5;

    int qtd2 = valor / 2;
    valor %= 2;

    int qtd1 = valor;

    printf("%d nota(s) de R$ 100,00\n", qtd100);
    printf("%d nota(s) de R$ 50,00\n", qtd50);
    printf("%d nota(s) de R$ 20,00\n", qtd20);
    printf("%d nota(s) de R$ 10,00\n", qtd10);
    printf("%d nota(s) de R$ 5,00\n", qtd5);
    printf("%d nota(s) de R$ 2,00\n", qtd2);
    printf("%d nota(s) de R$ 1,00\n", qtd1);

    return 0;
}
