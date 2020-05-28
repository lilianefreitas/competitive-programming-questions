#include <bits/stdc++.h>
using namespace std;

int n, p, q;
char c;


int main(){
    scanf(" %d %d %c %d", &n, &p, &c, &q);

    int resultado; 

    if (c == '+'){
        resultado = p + q;

    } else {
        resultado = p * q;
    }

    if (resultado > n){
        printf("OVERFLOW\n");
    } else {
        printf("OK\n");
    }

    return 0;
}
