#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	int len;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;
	p = malloc(len * sizeof(char));
	if (p != NULL)
	{
		memcpy(p, str, len);
	}
	return (p);
}
