#include <bits/stdc++.h>
using namespace std;

int a, b, subtracao;

int main () {
    scanf("%d %d", &a, &b);

    subtracao = b - a;

    if (subtracao <= 0){
        subtracao += 24;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", subtracao);


    return 0;
}
