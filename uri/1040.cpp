#include <bits/stdc++.h>
using namespace std;

double a, b, c, d, e;

int main () {
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);

    double media = ((a*2) + (b*3) + (c*4) + (d*1)) / 10;
    printf("Media: %.1lf\n", media);

    if (media >= 5.0 and media < 7.0){
        printf("Aluno em exame.\n");

        scanf("%lf", &e);
        printf("Nota do exame: %.1lf\n", e);

        double mediafinal = (media + e) / 2;

        if (mediafinal >= 5){
            printf("Aluno aprovado.\n");

        } else{
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n", mediafinal);

    } else if (media < 5.0){
        printf("Aluno reprovado.\n");

    } else if (media >= 7.0){
        printf("Aluno aprovado.\n");
    }


    return 0;
}
