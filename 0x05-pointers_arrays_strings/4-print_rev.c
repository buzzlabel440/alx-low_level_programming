#include "main.h"

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */
void print_rev(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)

	for (index = index - 1; s[index] != '\0'; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
