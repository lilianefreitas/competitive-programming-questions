#include <bits/stdc++.h>
using namespace std;

// N = pressão desejada pelo motorista
// M = pressão lida pela bomba
int N, M;

int main() {

    // pegar as entradas
    scanf("%d%d", &N, &M);

    // diferença entre a pressao desejada e a lida
    int diferenca = N - M;

    // imprimindo a diferença
    // colocar barra N apos o %d
    printf("%d", diferenca);

    return 0;
}
