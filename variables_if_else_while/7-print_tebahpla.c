#include <stdio.h>

/**
 * main - echo l'alphabet a l'envers
 * Return: always 0 (SUCESS)
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
return (0);
}
