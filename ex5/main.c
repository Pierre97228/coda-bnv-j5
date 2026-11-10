#include <stdlib.h>
#include <stdio.h>
#include "functions.h"

int main()
{
    print_str("Bonjour, le monde !");
    int num1 = 8;
    int num2 = 8;
    int result = addition(num1, num2);
    printf("Result : %d\n", result);
    double resultat = compute_average(18, 14, 10);
    printf("%.2f\n", resultat);
	exit(0);
}