#include <bits/stdc++.h>
using namespace std;

int x, y;

int main () {
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= y; i++) {
       printf("%d", i);

       if (i == y){
       printf("\n");

       } else if (i % x == 0) {
        printf("\n");

       } else {
        printf(" ");

       }
    }

    return 0;
}
