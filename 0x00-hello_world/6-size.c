#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway return 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(long int));
	printf("Size longlongint:%lubyte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(float));
	return (0);
}

