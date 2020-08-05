#include <bits/stdc++.h>
using namespace std;

int segundos, minutos, horas;

int main () {
    scanf("%d", &segundos);

    while (segundos >= 60){
        segundos -= 60;
        minutos += 1;
    }

    while (minutos >= 60){
        minutos -= 60;
        horas += 1;
    }

    printf("%d:%d:%d\n", horas, minutos, segundos);


    return 0;
}
