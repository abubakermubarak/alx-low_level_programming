#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 * print lower_case alphabet by _putcahar
 * Return: Alway return 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char alphabet = 'a';
		int j;

		for (j = 0; j < 26; j++)
		{
			_putchar(alphabet + j);
		}
		_putchar('\n');
	}
}
