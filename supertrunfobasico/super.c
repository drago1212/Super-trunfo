#include <stdio.h>

//%d: Imprime um inteiro no formato decimal.
//%i: Equivalente a %d.
//%f: Imprime um número de ponto flutuante no formato padrão.
//%e: Imprime um número de ponto flutuante na notação científica.
//%c: Imprime um único caractere.
//%s: Imprime uma cadeia (string) de caracteres.

int main (){
    char cidade[100]; 
    char codigo[100];
    char estado[100];
    int pop, npt;
    float area, pib; 

    char cidade2[100]; 
    char codigo2[100];
    char estado2[100];
    int pop2, npt2;
    float area2, pib2;

//--------------------------------CARTA 1---------------------------------------------

    printf ("CARTA 1:\n");
    printf ("\n");

    printf ("Digite o nome da cidade:\n");
    //scanf ("%s", &cidade);
    fgets(cidade, 100, stdin);
    //cidade[strcspn(cidade, "\n")] = 0;

    printf ("Digite o estado:\n");
    //scanf ("%s", &estado);
    fgets(estado, 100, stdin);

    printf ("Digite o codigo da carta:\n");
    fgets(codigo, 100, stdin);

    printf ("Digite o numero da populacao:\n");
    scanf ("%i", &pop);
    //fgets(pop, 100, stdin);

    printf ("Digite a area(em km quadrados):\n");
    scanf ("%f", &area);

    printf ("Digite o PIB:\n");
    scanf ("%f", &pib);

    printf ("Digite o Numero de Pontos Turisticos:\n");
    scanf ("%i", &npt);
    getchar();

//--------------------------------CARTA 2---------------------------------------------

    printf ("\n");
    printf ("\n");
    printf ("CARTA 2:\n");
    printf ("\n");

    printf ("Digite o nome da cidade:\n");
    //scanf ("%s", &cidade);
    fgets(cidade2, 100, stdin);
    //cidade[strcspn(cidade, "\n")] = 0;

    printf ("Digite o estado:\n");
    //scanf ("%s", &estado);
    fgets(estado2, 100, stdin);

    printf ("Digite o codigo da carta:\n");
    fgets(codigo2, 100, stdin);

    printf ("Digite o numero da populacao:\n");
    scanf ("%i", &pop2);
    //fgets(pop2, 100, stdin);

    printf ("Digite a area(em km quadrados):\n");
    scanf ("%f", &area2);

    printf ("Digite o PIB:\n");
    scanf ("%f", &pib2);

    printf ("Digite o Numero de Pontos Turisticos:\n");
    scanf ("%i", &npt2);
    getchar();

//--------------------------------------------------------------------------
    printf ("\n");
    printf ("--------------------------------------------------------------------------\n");
    printf ("\n");
    printf ("CARTA 1:\n");
    printf ("\n");
    printf ("Estado: %s\n", estado);
    //printf ("\n");
    printf ("Codigo: %s\n", codigo);
    //printf ("\n");
    printf ("Nome da cidade: %s\n", cidade);
    //printf ("\n");
    printf ("Populacao: %i\n", pop );
    printf ("\n");
    printf ("Area: %f quadrados\n", area );
    printf ("\n");
    printf ("PIB: %f\n", pib );
    printf ("\n");
    printf ("Numero de Pontos Turisticos: %i\n", npt);

//--------------------------------------------------------------------------
    printf ("\n");
    printf ("--------------------------------------------------------------------------\n");
    printf ("\n");
    printf ("CARTA 2:\n");
    printf ("\n");
    printf ("Estado: %s\n", estado2);
    //printf ("\n");
    printf ("Codigo: %s\n", codigo2);
    //printf ("\n");
    printf ("Nome da cidade: %s\n", cidade2);
    //printf ("\n");
    printf ("Populacao: %i\n", pop2 );
    printf ("\n");
    printf ("Area: %f km quadrados\n", area2 );
    printf ("\n");
    printf ("PIB: %f\n", pib2 );
    printf ("\n");
    printf ("Numero de Pontos Turisticos: %i\n", npt2);
    printf ("\n");
    printf ("------------------------------------FIM--------------------------------------\n");
    getchar();

    return 0;

}