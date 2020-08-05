#include <bits/stdc++.h>
using namespace std;

float salario, reajuste, novosalario;
int percentual;

int main () {
    scanf("%f", &salario);

    if (salario <= 400.00){
        reajuste = (15.0/100) * salario;
        novosalario = reajuste + salario;
        percentual = 15;
        
    
    } else if (salario >= 400.01 and salario <= 800.00){
        reajuste = (12.0/100) * salario;
        novosalario = reajuste + salario;
        percentual = 12;

    } else if (salario >= 800.01 and salario <= 1200.00){
        reajuste = (10.0/100) * salario;
        novosalario = reajuste + salario;
        percentual = 10;

    } else if (salario >= 1200.01 and salario <= 2000.00){
        reajuste = (7.0/100) * salario;
        novosalario = reajuste + salario;
        percentual = 7;

    } else if (salario > 2000.00){
        reajuste = (4.0/100) * salario;
        novosalario = reajuste + salario;
        percentual = 4;

    }

    printf("Novo salario: %.2f\n", novosalario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}
