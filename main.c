#include <stdio.h>
#include <stdlib.h>
#include "calculatrice.h"

int main ()
{
    int a, b, choix, resultat;

    printf("Entrez le premier nombre :\n");
    scanf("%d", &a);
    printf("Entrez le deuxieme nombre :\n");
    scanf("%d", &b);

    printf("Choissisez une operation : \n");
    printf("1 - Addition : \n");
    printf("2 - Soustraction : \n");
    printf("3 - Multiplication : \n");
    printf("4 - Division : \n");
    printf("Votre choix : \n");
    scanf("%d", &choix);

    if (choix == 1)
    {
        resultat = addition(a, b);
        printf("Resultat : %d\n", resultat);
    }
    else if (choix == 2)
    {
        resultat = soustraction(a, b);
        printf("Resultat : %d\n", resultat);
    }
    else if (choix == 3)
    {
        resultat = multiplication(a, b);
        printf("Resultat : %d\n", resultat);
    }
    else 
    {
        printf("Choix invalide. \n");
    }
    
    return 0;
}