#include <stdio.h>



int addition(int nombre1, int nombre2)
{
    int resultat = nombre1 + nombre2;
    return resultat;
}
int soustraction(int nombre1, int nombre2)
{
    int resultat = nombre1 - nombre2;
    return resultat;
}
int multiplication(int nombre1, int nombre2)
{
    int resultat = nombre1 * nombre2;
    return resultat;
}
double division(double nombre1, double nombre2)
{
    if (nombre2 == 0)
    {
        printf("Impossible de diviser par 0.\n");
        return 0;
    }
    else
    {
        double resultat = nombre1 / nombre2;
        return resultat;
    }
}
int modulo(int nombre1, int nombre2)
{
    if (nombre2 == 0)
    {
        printf("Impossible de diviser par 0.\n");
        return 0;
    }
    else
    {
        int resultat = nombre1 % nombre2;
        return resultat;
    }
}
