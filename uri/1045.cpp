#include <bits/stdc++.h>
using namespace std;

double x, y, z, a, b, c, soma, meio;

int main () {
    scanf("%lf %lf %lf", &x, &y, &z);

    a = max({x, y, z});
    b = min({x, y, z});
    soma = x + y + z;
    meio = soma - a - b;
    c = meio;

    if (a >= (b+c)){
        printf("NAO FORMA TRIANGULO\n");

    } else {

        if ((a*a) == (b*b) + (c*c)){
            printf("TRIANGULO RETANGULO\n");

        } 

        if ((a*a) > (b*b) + (c*c)){
            printf("TRIANGULO OBTUSANGULO\n");

        } 

        if ((a*a) < (b*b) + (c*c)){
            printf("TRIANGULO ACUTANGULO\n");

        } 

        if (a == b and b == c){
            printf("TRIANGULO EQUILATERO\n");

        } else if (a == b or c == a or c == b){
            printf("TRIANGULO ISOSCELES\n");

        }

    }

    return 0;
}
