#include <bits/stdc++.h>
using namespace std;

int positivo;
double x;

int main () {

    for(int i = 0; i < 6; i++) {
        scanf("%lf", &x);

        if (x > 0) {
            positivo++;

        } 
    }

    printf("%d valores positivos\n", positivo);

    return 0;
}
