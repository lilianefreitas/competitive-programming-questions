#include <bits/stdc++.h>
using namespace std;

double a, b;

int main() {
    scanf("%*s%lf%lf", &a, &b);

    double resultado = a + (0.15*b);

    printf("TOTAL = R$ %.2lf\n", resultado);
        
    return 0;
}
