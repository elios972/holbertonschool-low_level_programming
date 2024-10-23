#include <stdio.h>

/**
 * main - echo l'alphabet en minuscule
 * Return: always 0 (SUCESS)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
return (0);
}
