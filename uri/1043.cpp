#include <bits/stdc++.h>
using namespace std;

double a, b, c;

int main() {
    scanf(" %lf %lf %lf", &a, &b, &c);
    
    if ((a < b + c) and (b < c + a) and (c < a + b)) {

       double perimetro = a + b + c;

        printf("Perimetro = %.1lf\n", perimetro);

    } else {

        double area = ((a + b) * c) / 2;

        printf("Area = %.1lf\n", area);

    }

    return 0;
}
