#include <bits/stdc++.h>
using namespace std;

// apresentando as variáveis
int n, v[60];

int main() {
    
    // lendo o valor n
    scanf("%d", &n);

    // lendo os n valores diferentes
    for (int i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
    }

    // mostrando os n resultados desejados 
    for (int i = 1; i <= n; i++) {

        int resultado;
        
        resultado = v[i-1] + v[i] + v[i+1];

        printf("%d\n", resultado);
    }

    return 0;
}
