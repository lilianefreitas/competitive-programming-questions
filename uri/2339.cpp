#include <bits/stdc++.h>
using namespace std;

int c, p, f;


int main() {
    scanf("%d%d%d", &c, &p, &f);

    int resultado = p / c;

    if (resultado >= f){
        printf("S\n");

    } else if (resultado < f){
        printf("N\n");
    }


    return 0;
}
