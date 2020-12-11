#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, e;
int par, impar, positivo, negativo;

int main() {
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    // letra a
    if (a % 2 == 0){
        par += 1;

    } if (a % 2 != 0){
        impar += 1;

    } if (a > 0){
        positivo += 1;

    } if (a < 0){
        negativo += 1;

    }

    // letra b
    if (b % 2 == 0){
        par += 1;

    } if (b % 2 != 0){
        impar += 1;

    } if (b > 0){
        positivo += 1;

    } if (b < 0){
        negativo += 1;

    }

    // letra c
    if (c % 2 == 0){
        par += 1;

    } if (c % 2 != 0){
        impar += 1;

    } if (c > 0){
        positivo += 1;

    } if (c < 0){
        negativo += 1;

    }

    // letra d
    if (d % 2 == 0){
        par += 1;

    } if (d % 2 != 0){
        impar += 1;

    } if (d > 0){
        positivo += 1;

    } if (d < 0){
        negativo += 1;

    }

    // letra e
    if (e % 2 == 0){
        par += 1;

    } if (e % 2 != 0){
        impar += 1;

    } if (e > 0){
        positivo += 1;

    } if (e < 0){
        negativo += 1;

    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);

    return 0;
}
