 #include <bits/stdc++.h>
using namespace std; 

int n;

int main () {
    scanf("%d", &n);
    printf("%d\n", n);

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

    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);
    
    return 0;
}
