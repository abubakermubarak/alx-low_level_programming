#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway return 0
 */
int main(void)
{
	int i, j;
  for( i = 0; i < 99 ; i++)
{
    for( j =0; j < 99; j++)
    {
      
        putchar((i/10)+'0');
        putchar((j/10) + '0');
        putchar (' ');
        putchar((i%10)+'0');
        putchar((j%10)+'0');
        putchar(',');
        putchar(' ');
    }

  }
  putchar('\n');
  return (0);
}
