#include <bits/stdc++.h>
using namespace std;

float x, y;

int main() {
    scanf("%f%f", &x, &y);

    float consumo = x / y;
    
    printf("%.3f km/l\n", consumo);

    return 0;
}
