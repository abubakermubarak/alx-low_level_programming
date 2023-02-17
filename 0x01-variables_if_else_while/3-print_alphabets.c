#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway return 0
 */
int main(void)
{
	char alphabet = 'a';
	char upper = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
