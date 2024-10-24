#include <stdio.h>

/**
 * main - echo les chiffres de 0 a 9
 * Return: always 0 (SUCESS)
 */

int main(void)
{
	int n;

	{
	for (n = 0; n < 10; n++)
		printf("%i", n);
	}
	putchar('\n');
	return (0);
}
