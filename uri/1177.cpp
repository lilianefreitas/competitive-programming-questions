#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int t, v[N];

int main () {
    scanf("%d", &t);

    for(int i = 0; i < N; i++){
        v[i] = i % t;
        printf("N[%d] = %d\n", i, v[i]);

    }


    return 0;
}
