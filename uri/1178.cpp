#include <bits/stdc++.h>
using namespace std;

// declarando as variáveis 
const int N = 100;
double x, v[N];

int main () {
    scanf("%lf", &x);

    // preenchendo o vetor 
    v[0] = x;

    for (int i = 1; i < N; i++){
        v[i] = v[i-1]/2;
    }
    
    // imprimindo os resultados
    for (int i = 0; i < N; i++){
        printf("N[%d] = %.4lf\n", i, v[i]); 
    }

    return 0;
}
