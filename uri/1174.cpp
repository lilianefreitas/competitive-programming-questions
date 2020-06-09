#include <bits/stdc++.h>
using namespace std;

double v[100];

int main () {
    for(int i = 0; i < 100; i++){
        scanf("%lf", &v[i]);

        if (v[i] <= 10) {
            printf("A[%d] = %.1lf\n", i, v[i]);
        }
    }

    return 0;
}
