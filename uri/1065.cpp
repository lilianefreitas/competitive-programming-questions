#include <bits/stdc++.h>
using namespace std;

int x, pares;

int main () {
    for (int i = 0; i < 5; i++){
        scanf("%d", &x);

        if (x % 2 == 0) {
            pares++;
        }
    }

    printf("%d valores pares\n", pares);

    return 0;
}
