#include <stdio.h>
#include "operation.h"

int main()
{
char operateur;
int nombre1;
int nombre2;
printf("Bonjour ! Bienvenue dans la calculatrice.\n");

printf("Choisissez un operateur (+, -, *, /, %%) : ");
scanf(" %c", &operateur);

printf("Choisissez un premier nombre : ");
scanf("%d", &nombre1);

printf("Choisissez un second nombre : ");
scanf("%d", &nombre2);
if (operateur == '+')
    {
        int resultat = addition(nombre1, nombre2);
        printf("%d %c %d = %d\n", nombre1, operateur, nombre2, resultat);
    }
    else if (operateur == '-')
    {
        int resultat = soustraction(nombre1, nombre2);
        printf("%d %c %d = %d\n", nombre1, operateur, nombre2, resultat);
    }
    else if (operateur == '*')
    {
        int resultat = multiplication(nombre1, nombre2);
        printf("%d %c %d = %d\n", nombre1, operateur, nombre2, resultat);
    }
    else if (operateur == '/')
    {
        if (nombre2 == 0)
        {
            printf("Impossible de diviser par 0.\n");
        }
        else
        {
            double resultat = division(nombre1, nombre2);
            printf("%d %c %d = %.2f\n", nombre1, operateur, nombre2, resultat);
        }
    }
    else if (operateur == '%')
    {
        if (nombre2 == 0)
        {
            printf("Impossible de diviser par 0.\n");
        }
        else
        {
            int resultat = nombre1 % nombre2;
            printf("%d %c %d = %d\n", nombre1, operateur, nombre2, resultat);
        }
    }
    else
    {
        printf("Operateur non reconnu.\n");
    }

    return 0;
}