#include "main.h"
/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i = 0;

	for(i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if(s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
			continue;
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';'
		   || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"'
	           || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
				continue;
			}
		}
	}
	return (s);
}	
