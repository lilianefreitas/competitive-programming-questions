#include <bits/stdc++.h>
using namespace std;

int t, v;
double d;

int main() {
    scanf(" %d %d", &t, &v);
    
    d = v * t;

    double resultado = d / 12;

    printf("%.3lf\n", resultado);

    return 0;
}
