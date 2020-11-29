#include <bits/stdc++.h>
using namespace std;

int n, g;
double p, resultadoparcial, respostafinal = 2000000;

int main () {
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        scanf("%lf %d", &p, &g);

        resultadoparcial = (p * 1000.0) / g;

        respostafinal = min(respostafinal, resultadoparcial);
    }
    
    printf("%.2lf\n", respostafinal);

    return 0;
}

