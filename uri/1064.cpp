#include <bits/stdc++.h>
using namespace std;

int positivo;
double x, soma;

int main() {

    for (int i = 0; i < 6; i++) {
        scanf("%lf", &x);

        if (x > 0) {
            positivo++;
            soma += x;
        }
    }
    
    double media = soma / positivo;

    printf("%d valores positivos\n", positivo);
    printf("%.1lf\n", media);

    return 0;
}
