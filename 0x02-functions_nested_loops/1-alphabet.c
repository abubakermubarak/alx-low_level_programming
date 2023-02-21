#include "main.h"
/**
 *print_alphabet - Entry point
 * print lower_case alphabet by _putcahar
 * Return: Alway return 0
 */
void print_alphabet(void)
{
	char alphabet = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabet + i);
	}
	_putchar('\n');
}
