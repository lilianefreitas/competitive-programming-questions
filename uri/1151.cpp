#include <bits/stdc++.h>
using namespace std;

const int N = 50;
int n;
long long f[N];

int main () {
    
    f[0] = 0;
    f[1] = 1;

    for (int i = 2; i < N; i++) {

        f[i] = f[i-1] + f[i-2];

    }

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        
        printf("%lld", f[i]);

        if (i == n-1) {
            printf("\n");

        } else {
            printf(" ");
        }

    }

    return 0;
}
