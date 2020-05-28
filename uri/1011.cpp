#include <bits/stdc++.h>
using namespace std;

double raio;
const double pi = 3.14159;

int main () { 
    scanf("%lf", &raio);

    double volume = (4/3.0) * pi * raio * raio * raio; 

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
