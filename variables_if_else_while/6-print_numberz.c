#include <stdio.h>

/**
 * main - echo les chiffres de 0 a 9
 * Return: always 0 (SUCESS)
 */

int main(void)
{
	char n = '0';

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
