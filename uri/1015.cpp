#include <bits/stdc++.h>
using namespace std;

double xa, ya, xb, yb, resultado;

int main() {
    scanf(" %lf %lf %lf %lf", &xa, &ya, &xb, &yb);

    resultado = sqrt(((xb - xa) * (xb - xa)) + ((yb - ya) * (yb - ya)));

    printf("%.4lf\n", resultado);

    return 0;
}
