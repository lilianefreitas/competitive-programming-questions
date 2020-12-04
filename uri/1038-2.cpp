#include <bits/stdc++.h>
using namespace std;

int cod, qtd;
double preco, resultado;

int main() {
    scanf("%d%d", &cod, &qtd);

    if (cod == 1){
        preco = 4.00;
        resultado = qtd * preco;

        printf("Total: R$ %.2lf\n", resultado);

    } else if (cod == 2){
        preco = 4.50;
        resultado = qtd * preco;

        printf("Total: R$ %.2lf\n", resultado);

    } else if (cod == 3){
        preco = 5.00;
        resultado = qtd * preco;

        printf("Total: R$ %.2lf\n", resultado);

    } else if (cod == 4){
        preco = 2.00;
        resultado = qtd * preco;

        printf("Total: R$ %.2lf\n", resultado);

    } else if (cod == 5){
        preco = 1.50;
        resultado = qtd * preco;

        printf("Total: R$ %.2lf\n", resultado);

    }
   
    return 0;
}
