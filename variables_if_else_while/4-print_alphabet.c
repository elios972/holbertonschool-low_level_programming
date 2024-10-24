#include <stdio.h>

/**
 * main - echo l'alphabet en minuscule sans q et e
 * Return: always 0 (SUCESS)
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	if (alphabet != 'e' && alphabet != 'q')
	{
		putchar(alphabet);
		alphabet++;
	}
	else
	{
		alphabet++;
	}
	putchar('\n');
return (0);
}
