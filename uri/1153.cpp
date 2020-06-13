#include <bits/stdc++.h>
using namespace std;

int n;
long long fatorial = 1;

int main () {
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        
        fatorial *= i;

    }

    printf("%lld\n", fatorial);

    return 0;
}
