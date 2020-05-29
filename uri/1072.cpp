#include <bits/stdc++.h>
using namespace std;

int n, x; 
int qtdin, qtdout; 

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &x);

        if (10 <= x and x <= 20) {
            qtdin++;

        } else {
            qtdout++;
        }
    }
    
    printf("%d in\n", qtdin);
    printf("%d out\n", qtdout);

    return 0;
}
