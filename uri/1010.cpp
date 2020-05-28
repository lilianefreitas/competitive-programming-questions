#include <bits/stdc++.h>
using namespace std; 

int qtd1, qtd2;
float p1, p2;

int main() {
    scanf("%*d%d%f%*d%d%f", &qtd1, &p1, &qtd2, &p2);

    float resultado = (qtd1 * p1) + (qtd2 * p2);

    printf("VALOR A PAGAR: R$ %.2f\n", resultado);


    return 0;
}
