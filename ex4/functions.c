#include <stdlib.h>
#include <stdio.h>

void print_str(char*str)
{
printf("%s\n", str);
}

int addition(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

double compute_average(double nb1, double nb2, double nb3)
{
    double calcul1 = (nb1 + nb2 + nb3) / 3;

    return (calcul1);
}