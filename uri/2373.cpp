#include <bits/stdc++.h>
using namespace std;

int n, l, c;
int quebrados;

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &l, &c);

        if(l > c) {
            quebrados += c;

        } else if (c > l) {
            continue;

        }
    }

    printf("%d\n", quebrados);

    return 0;
}
