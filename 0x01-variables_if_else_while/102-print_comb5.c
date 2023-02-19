#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway return 0
 */
int main(void)
{
	int i, j, k, l;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (l = 0; l < 10; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					putchar(',');
					putchar(' ');
					if (i == 9 && j == 8 && k == 9 && l == 9)
					{
						break;
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

