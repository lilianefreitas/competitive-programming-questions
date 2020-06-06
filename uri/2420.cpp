#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+10;

// apresentando as variáveis
int n, soma, somaparcial, resposta, v[N];

int main () {

    // pegando o n 
    scanf("%d", &n);

    // pegando os termos do vetor
    for (int i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
       
        // somando os termos
        soma += v[i];
    }

    // encontrando o k 

    for (int i = 1; i <= n; i++) {
        
        somaparcial += v[i];
         
        if (somaparcial == soma / 2) {
            
            resposta = i;
        }
    }

    // imprimindo o resultado 
    printf("%d\n", resposta);

    return 0;
}
