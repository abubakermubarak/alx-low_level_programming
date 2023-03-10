#include "main.h"
#include <stdbool.h>
/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i, j;
	bool flag;

	for (i = 0; s[i] != '\0'; i++)
	{
		flag = false;
		for (j = 0; accept[j] != '\0'; j++)
			if (accept[j] == s[i])
			{
				flag = true;
				break;
			}
		if (!flag)
		{
			break;
		}
		else
		{
			count++;
		}
	}
	return (count);
}
