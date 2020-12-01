#include <bits/stdc++.h>
using namespace std;

int inteiro, decimal;

int main() {
    scanf("%d.%d", &inteiro, &decimal);

    // notas
    int qtd100 = inteiro / 100;
    inteiro %= 100;

    int qtd50 = inteiro / 50;
    inteiro %= 50;

    int qtd20 = inteiro / 20;
    inteiro %= 20;

    int qtd10 = inteiro / 10;
    inteiro %= 10;

    int qtd5 = inteiro / 5;
    inteiro %= 5;

    int qtd2 = inteiro / 2;
    inteiro %= 2;
    
    // moedas
    int qtd1 = inteiro / 1;
    inteiro %= 1;

    int qtd50cent = decimal / 50;
    decimal %= 50;

    int qtd25cent = decimal / 25;
    decimal %= 25;

    int qtd10cent = decimal / 10;
    decimal %= 10;

    int qtd5cent = decimal / 5;
    decimal %= 5;

    int qtd1cent = decimal;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", qtd100);
    printf("%d nota(s) de R$ 50.00\n", qtd50);
    printf("%d nota(s) de R$ 20.00\n", qtd20);
    printf("%d nota(s) de R$ 10.00\n", qtd10);
    printf("%d nota(s) de R$ 5.00\n", qtd5);
    printf("%d nota(s) de R$ 2.00\n", qtd2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", qtd1);
    printf("%d moeda(s) de R$ 0.50\n", qtd50cent);
    printf("%d moeda(s) de R$ 0.25\n", qtd25cent);
    printf("%d moeda(s) de R$ 0.10\n", qtd10cent);
    printf("%d moeda(s) de R$ 0.05\n", qtd5cent);
    printf("%d moeda(s) de R$ 0.01\n", qtd1cent);

    return 0;
}
