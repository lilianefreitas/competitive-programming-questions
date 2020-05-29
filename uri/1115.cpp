#include <bits/stdc++.h>
using namespace std;

int x, y;

int main() {
    
    while (1) {
        scanf("%d %d", &x, &y);

        if (x == 0 or y == 0) {
            break;

        } else if (x > 0 and y > 0) {
            printf("primeiro\n");

        } else if (x < 0 and y > 0) {
            printf("segundo\n");

        } else if (x < 0 and y < 0) {
            printf("terceiro\n");

        } else if (x > 0 and y < 0) {
            printf("quarto\n");

        }

    }

    return 0;
}
