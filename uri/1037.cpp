#include <bits/stdc++.h>
using namespace std;

double x;

int main() {
    scanf("%lf", &x);


    if (0 <= x and x <= 25) {
        printf("Intervalo [0,25]\n");

    } else if ( 25 < x and  x <= 50) {
        printf("Intervalo (25,50]\n");

    } else if (50 < x and x <= 75) {
        printf("Intervalo (50,75]\n");

    } else if ( 75 < x and x <= 100 ) {
        printf("Intervalo (75,100]\n");

    } else {
        printf("Fora de intervalo\n");
    }

    return 0;
}
