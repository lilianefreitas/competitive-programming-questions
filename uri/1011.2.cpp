#include <bits/stdc++.h>
using namespace std;

// declarando as variáveis
double a;
const double PI = 3.14159;

int main() {

    // entrada dos valores
    scanf("%lf", &a);

    // calculando o volume da esfera
    double resultado = (4.0/3)*PI*a*a*a;

    // saída dos valores
    printf("VOLUME = %.3lf\n", resultado);

    return 0;
}
