#include <bits/stdc++.h>
using namespace std;

int n, movimento, a, b, c;
char posicao;

int main() {
    scanf(" %d", &n);
    scanf(" %c", &posicao);

    if (posicao == 'A') {
        a = 1;

    } else if (posicao == 'B'){
        b = 1;

    } else if (posicao == 'C') {
        c = 1;
    }

    for (int i = 0; i < n; i++) {
        scanf(" %d", &movimento);

        if (movimento == 1) {
           swap(a, b);

        } else if (movimento == 2) {
            swap(b, c);

        } else if (movimento == 3) {
            swap (c, a);

        } 
    }

    if (a == 1) {
        printf("A\n");

    } else if (b == 1) {
        printf("B\n");

    } else if (c == 1) {
        printf("C\n");

    }

    return 0;
}
