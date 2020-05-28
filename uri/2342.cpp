#include <bits/stdc++.h>
using namespace std;

int n, p, q;
char c;


int main(){
    scanf(" %d %d %c %d", &n, &p, &c, &q);
   
    if (c == '+'){
        int resultado = p + q;
        if (resultado > n){
            printf("OVERFLOW\n");
        } else {
            printf("OK\n");
        }

    } else {
        int resultado = p * q;
        if (resultado > n){
            printf("OVERFLOW\n");
        } else {
            printf("OK\n");
        }

    }


    return 0;
}
