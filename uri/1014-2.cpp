#include <bits/stdc++.h>
using namespace std;

int x;
double y;

int main() {
    scanf("%d%lf", &x, &y);

    double consumo = x / y;

    printf("%.3lf km/l\n", consumo);

    return 0;
}
