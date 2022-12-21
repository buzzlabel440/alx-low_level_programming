#include "main.h"

/**
 * lest - function that encode a string
 * @str: string will be encoded
 *
 * Return: returns encoded string
 */

char *leet(char *str)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2])
				str[index] = index2 + '0';
		}
	}
	return (str);
}
