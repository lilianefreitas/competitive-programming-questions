#include <bits/stdc++.h>
using namespace std;

// declarando as variáveis
double a, b;

int main() {

    // pegando os valores de entrada
    scanf("%lf%lf", &a, &b);
    
    // calculando a média
    double media = ((a*3.5 + b*7.5) / 11);
    
    // imprimindo o resultado
    // coloque barra N depois do %lf
    printf("MEDIA = %.5lf", media);

    return 0;
}
