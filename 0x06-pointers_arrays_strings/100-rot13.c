#include "main.h"
/**
 * *rot13 - a function that encodes a string
 *
 * @str: string pointer to be encoded
 *
 * Return: str
 */
char *rot13(char *str)
{
	int a, b;
	char pre[(13 * 4) - 1] = "abcdefghijklmnopqrstuvwxyz";
	char sec[(13 * 4) - 1] = "nopqrstuvwxyzabcdefghijklm";

	strcat(pre, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	strcat(sec, "NOPQRSTUVWXYZABCDEFGHIJKLM");

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

