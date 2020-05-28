#include <bits/stdc++.h>
using namespace std;

int p1, c1, p2, c2;

int main (){
    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
    
    int lado1 = (p1 * c1);
    int lado2 = (p2 * c2);

        if (lado1 == lado2) {
            printf("0\n");

        } else if (lado1 > lado2) {
            printf("-1\n");

        } else {
            printf("1\n");
        }

    return 0;
}
