#include <stdio.h>
#include <stdlib.h>
/**
 * main - ooo
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
