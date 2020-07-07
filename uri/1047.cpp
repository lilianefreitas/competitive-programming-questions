#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;

int main () {
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int hora = c - a;
    int min = d - b;

    if (min < 0){
        hora -= 1;
        min += 60;

    } 

    if (hora < 0){
        hora += 24;

    }

    if (hora == 0 and min == 0){
        hora += 24;

    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, min);

    return 0;
}
