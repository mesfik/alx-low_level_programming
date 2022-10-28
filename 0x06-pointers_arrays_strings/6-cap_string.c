#include "main.h"
/**
 * *cap_string - a function that capitalizes all words of the string
 *
 * @str: a string pointer
 *
 * Return: string
 */
char *cap_string(char *str)
{
	char *stSep = " \t\n,;.!?\"(){}";
	int i, a;

	for (i = 0; str[i]; i++)
	{
		if (i == 0)
		{
			str[i] = toupper(str[i]);
			continue;
		}
		for (a = 0; stSep[a]; a++)
		{
			if (str[i - 1] == stSep[a])
			{
				str[i] = toupper(str[i]);
				break;
			}
		}
	}
	return (str);
}


