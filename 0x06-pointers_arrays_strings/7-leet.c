#include"main.h"
/**
 * *leet - function that encodes a string into 1337
 *
 * @str: a string pointer to encode
 *
 * Return: str
 */
char *leet(char *str)
{
	char *pre = "aeotlAEOTL";
	char *sec = "4307143071";
	int a, b;

	for (a = 0; str[a]; a++)
	{
		for (b = 0; pre[b]; b++)
		{
			if (pre[b] == str[a])
			{
				str[a] = sec[b];
				break;
			}
		}
	}
	return (str);
}
