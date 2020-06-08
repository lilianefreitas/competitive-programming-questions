#include <bits/stdc++.h>
using namespace std;

int x, v[10];

int main () {
    for(int i = 0; i < 10; i++) {
        scanf("%d", &x);

        if (x < 0 or x == 0) {
            printf("X[%d] = 1\n", i);

        } else {
            printf ("X[%d] = %d\n", i, x);

        }
    }


    return 0;
}
