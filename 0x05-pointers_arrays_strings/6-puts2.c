#include "main.h"

/**
 * puts2 - Print alternating chars of string
 * @str: String
 * Return: Void
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
