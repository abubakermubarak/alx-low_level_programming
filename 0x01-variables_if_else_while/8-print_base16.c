#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway return 0
 */
int main(void)
{
	char alphabet = 'a';

	int i;
	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (alphabet  = 'a'; alphabet < 'g'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
