#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * *_strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char  *ptr;

	ptr = haystack;

	while (*ptr != '\0')
	{
		if (strncmp(ptr, needle, strlen(needle)) == 0)
		{
			return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
