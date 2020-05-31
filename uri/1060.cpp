#include <bits/stdc++.h>
using namespace std;

int x, total, positivo;

int main() {

        while(1){

            scanf("%d", &x);

            if (x == 0) {
                continue;

            } else {
                total += 1;

            }

          if (x > 0) {
              positivo++;

              }

          if (total == 6) {
              break;

          }
        }

      printf("%d valores positivos\n", positivo);

    return 0;
}
