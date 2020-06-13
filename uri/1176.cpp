#include <bits/stdc++.h>
using namespace std;

// apresentando as variáveis
const int N = 65;
int n, t;
long long f[N];

int main () {

    // escrevendo os casos base
    f[0] = 0;
    f[1] = 1;

    // preenchendo o vetor
    for(int i = 2; i < N; i++) {
        
        // lei de recorrência 
        f[i] = f[i-1] + f[i-2]; 

    }

    // quantidade de testes
    scanf("%d", &t);
    
    // pegando as entradas e verificando o valor 
    // na determinada posição 
    for(int i = 0; i < t; i++) {
        scanf("%d", &n);

        printf("Fib(%d) = %lld\n", n, f[n]);
    }


    return 0;
}
