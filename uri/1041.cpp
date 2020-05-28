#include <bits/stdc++.h>
using namespace std;

double x, y;

int main() {
    scanf("%lf%lf", &x, &y);
    
    if (x > 0 and y > 0) {
    printf("Q1\n");

    } else if (x < 0 and y > 0) {
        printf("Q2\n");

    } else if (x < 0 and y < 0) {
        printf("Q3\n");

    } else if (x > 0 and y < 0) {
        printf("Q4\n");

    } else if (x == 0 and y == 0) {
        printf("Origem\n");

    } else if (x == 0) {
        printf("Eixo Y\n");

    } else if (y == 0) {
        printf("Eixo X\n");
    }

    return 0;
}
