#include <bits/stdc++.h>
using namespace std;

int x, soma, qtd;

int main() {
    while(1) {
        scanf("%d", &x);

        if (x < 0) {
            break;

        } else {
            soma += x;
            qtd++;

        }
    }

    double media = (double) soma / qtd;

    printf("%.2lf\n", media);

    return 0;
}
