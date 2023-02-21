#include "main.h"

/**
 * print alphabet
 * followed by a new line
 * this is a prototype
 *
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
	

