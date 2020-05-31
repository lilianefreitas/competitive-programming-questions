#include <bits/stdc++.h>
using namespace std;

int a, b;

int main() {
    scanf(" %d %d", &a, &b);

    if ( b > a){
    swap(a, b);
        
    }

    int multiplos = a % b;

    if (multiplos == 0) {
        printf("Sao Multiplos\n");

    } else {
        printf("Nao sao Multiplos\n");

    }

    return 0;
}
