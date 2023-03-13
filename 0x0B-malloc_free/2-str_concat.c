#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *str;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	
	str = malloc(len1 + len2 + 1);
	if (str != NULL)
	{
		if (s1)
		{
			while (s1[i] != '\0')
			{
				str[j] = s1[i];
				i++;
				j++;
			}
		}
		i = 0;
		if (s2)
		{
			while (s2[i] != '\0')
			{
				str[j] = s2[i];
				i++;
				j++;
			}
		}
		str[j] = '\0';
	}
	return (str);
}
