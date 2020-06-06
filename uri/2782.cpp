#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+10;

// declarando as variáveis 
int n, diferenca, resposta = 1, v[N];

int main () {
    scanf("%d", &n);

    // pegando os valores do vetor
    for (int i = 1; i <= n; i++) {
        scanf("%d", &v[i]);
    }

    // calculando a primeira diferenca
    diferenca = v[2] - v[1];

    // descobrindo novas escadinhas
    for (int i = 3; i <= n; i++) {
        
        // se for uma escadinha, somar na resposta
        if (diferenca != v[i] - v[i-1]) {
            resposta++;
        }

        // falando qual é a próxima diferença
        diferenca = v[i] - v[i-1];
    }

    printf("%d\n", resposta);

    return 0;
}
