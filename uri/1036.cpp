#include <bits/stdc++.h>
using namespace std;

double a, b, c;

int main() {
    scanf(" %lf %lf %lf", &a, &b, &c);

    double xa, xb, delta;

    delta = (b * b) - 4 * a * c;

    if (delta < 0) {
        printf("Impossivel calcular\n");

    } else if (a == 0) {
        printf("Impossivel calcular\n");

    } else {

        xa = (-b + sqrt(delta)) / (2 * a);
        xb = (-b - sqrt(delta)) / (2 * a);
        
        printf("R1 = %.5lf\n", xa);
        printf("R2 = %.5lf\n", xb);

    }

    return 0;
}
