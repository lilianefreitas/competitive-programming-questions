#include <bits/stdc++.h>
using namespace std;

double x;

int main() {
    scanf("%lf", &x);

    if (x >= 0 and x <= 25){
        printf("Intervalo [0,25]\n");

    } else if (x > 25 and x <= 50){
        printf("Intervalo (25,50]\n");

    } else if (x > 50 and x <= 75){
        printf("Intervalo (50,75]\n");

    } else if (x > 75 and x <= 100){
        printf("Intervalo (75,100]\n");

    } else {
        printf("Fora de intervalo\n");

    }

    return 0;
}
