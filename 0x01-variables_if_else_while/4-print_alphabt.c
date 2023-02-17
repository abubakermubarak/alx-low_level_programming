#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway return 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
		}
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
