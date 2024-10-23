#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - echo si le dernier chiffre d'un nombre est
 * <5/>6/0
 * Return: always 0 (SUCESS)
 */
int main(void)
{
	int n, LDON;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LDON = abs(n % 10);
		if (LDON == 0)
			printf("Last digit of %d is %d and is 0\n", n, LDON);
		if (LDON < 5)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LDON);
		if (LDON > 6 && LDON != 0)
			printf("Last digit of %d is %d and is greater than 5\n", n, LDON);
	return (0);
}
