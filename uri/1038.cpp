#include <bits/stdc++.h>
using namespace std;

int cod, qtd;
float resultado;

int main () {
    scanf("%d%d", &cod, &qtd);

    if (cod == 1 ){
        resultado = qtd * 4.00; 
        printf("Total: R$ %.2f\n", resultado);

    } else if (cod == 2){
        resultado = qtd * 4.50;
        printf("Total: R$ %.2f\n", resultado);

    } else if (cod == 3){
        resultado = qtd * 5.00;
        printf("Total: R$ %.2f\n", resultado);

    } else if (cod == 4){
        resultado = qtd * 2.00;
        printf("Total: R$ %.2f\n", resultado);

    } else if (cod == 5){
        resultado = qtd * 1.50;
        printf("Total: R$ %.2f\n", resultado);

    }

    return 0;
}
