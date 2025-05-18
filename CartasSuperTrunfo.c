#include <stdio.h>

int main() {
   char estado1[1], cc, nc[50];                    //cc = código da carta.          nc= nome da cidade.
    int pop;                            // pop = população.
    float ak, pib;                    // ak = área em km2.
    int npt;                          // npt = número de pontos turísticos.


    printf("Digite os dados da primeira carta\nDigite os dados de acordo\n");

    printf("Estado: \n");
    scanf(" %s", &estado1);

    printf("Codigo da carta: \n");
    scanf(" %s", &cc);

    printf("Nome da cidade: \n");
    scanf(" %s", nc);

    printf("Populacao: \n");
    scanf(" %i", &pop);

    printf("area em km2: \n");
    scanf(" %f", &ak);

    printf("PIB: \n");
    scanf(" %f", &pib);

    printf("Numero de pontos turisticos: \n");
    scanf(" %i", &npt);

    printf("\n---------------------//------------------------\n");

    printf("Essa e a primeira carta\n");
    printf("Estado: %s \n", &estado1);
    printf("Codigo da carta: %s \nNome da cidade: %s \n", &cc, nc);
    printf("Populacao: %i \nArea em km2: %f \nPIB: %f \nNumero de pontos turisticos: %i\n", pop, ak, pib, npt);


    printf("---------------------//------------------------\n");

    char estado2, cc2, nc2[50];                    //cc = código da carta.          nc= nome da cidade.
    int pop2;                            // pop = população.
    float ak2, pib2;                    // ak = área em km2.
    int npt2;                          // npt = número de pontos turísticos.


    printf("Digite os dados da Segunda carta\n digite os dados de acordo\n");

    printf("Estado: \n");
    scanf(" %s", &estado2);

    printf("Codigo da carta: \n");
    scanf(" %s", &cc2);

    printf("Nome da cidade: \n");
    scanf(" %s", nc2);

    printf("Populacao: \n");
    scanf(" %i", &pop2);

    printf("area em km2: \n");
    scanf(" %f", &ak2);

    printf("PIB: \n");
    scanf(" %f", &pib2);

    printf("Numero de pontos turisticos: \n");
    scanf(" %i\n", &npt2);
    printf("---------------------//------------------------\n");
    printf("Essa e a segunda carta\n");
    printf("Estado: %s \n", &estado2);
    printf("Codigo da carta: %s \nNome da cidade: %s \n", &cc2, nc2);
    printf("Populacao: %i \nArea em km2: %f \nPIB: %f \nNumero de pontos turisticos: %i", pop2, ak2, pib2, npt2);

    return 0;
}
