#include <stdio.h>

/**
 * main - echo l'alphabet en minuscule puis en majuscule
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
	char ALPHABET  = 'A';

	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
return (0);
}

