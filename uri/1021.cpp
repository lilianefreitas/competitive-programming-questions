#include <bits/stdc++.h>
using namespace std; 

int n, d;

int main () {
    scanf("%d.%d", &n, &d);

    int cem = n / 100;
    n = n % 100;

    int cinquenta = n / 50;
    n = n % 50;

    int vinte = n / 20;
    n = n % 20;

    int dez = n / 10;
    n = n % 10;

    int cinco = n / 5;
    n = n % 5;

    int dois = n / 2;
    n = n % 2;

    int um = n;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    

    int mcinquenta = d / 50;
    d = d % 50;
    
    int mvinteecinco = d / 25;
    d = d % 25; 

    int mdez = d / 10;
    d = d % 10;

    int mcinco = d / 5;
    d = d % 5;

    int mum = d;

    printf("%d moeda(s) de R$ 0.50\n", mcinquenta);
    printf("%d moeda(s) de R$ 0.25\n", mvinteecinco);
    printf("%d moeda(s) de R$ 0.10\n", mdez);
    printf("%d moeda(s) de R$ 0.05\n", mcinco);
    printf("%d moeda(s) de R$ 0.01\n", mum);
    
    return 0;
}
