#include <bits/stdc++.h>
using namespace std;

char coco[100];
string a, b, c;

int main () {
    scanf(" %s", coco);
    a = coco;

    scanf(" %s", coco);
    b = coco;

    scanf(" %s", coco);
    c = coco;

    // se a for vertebrado
    if (a == "vertebrado"){

        // se b for ave
        if (b == "ave"){

            // se c for carnivoro 
            if (c == "carnivoro"){
                printf("aguia\n");

                // se c for onivoro
            } else if (c == "onivoro"){
                printf("pomba\n");

            }

            // se b for mamifero
        } else if (b == "mamifero"){

            // se c for onivero
            if (c == "onivoro"){
                printf("homem\n");

                // se c for herbivoro
            } else if (c == "herbivoro"){
                printf("vaca\n");

            }
        }

        // se a for invertebrado
    } else {

        // se b for inseto
        if (b == "inseto"){

            // se c for hematofago
            if (c == "hematofago"){
                printf("pulga\n");

                // se c for herbivoro
            } else if (c == "herbivoro"){
                printf("lagarta\n");

            }


            // se b for anelideo
        } else if (b == "anelideo"){

            // se c for hematofago
            if (c == "hematofago"){
                printf("sanguessuga\n");

                // se c for onivoro
            } else if (c == "onivoro"){
                printf("minhoca\n");

            }

        }

    }


    return 0;
}
