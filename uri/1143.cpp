#include <bits/stdc++.h>
using namespace std;

int n, a, b, c;

int main () {
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
    a = i;
    b = i * i;
    c = i * i * i;
    
    printf("%d %d %d\n", a, b, c);
    
    }

    return 0;
}
