#include "main.h"

/**
 * print_alphabet - echo l'alphabet en minuscule mais relou
 * Return: always 0 (SUCESS)
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
