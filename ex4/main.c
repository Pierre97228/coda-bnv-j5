#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main()
{
    print_str("Bonjour, le monde !");
    int num1 = 2;
    int num2 = 2;
    int result = addition(num1, num2);
    printf("Result : %d\n", result);
    double resultat = compute_average(15, 12, 17);
    printf("%.2f\n", resultat);
	exit(0);
}