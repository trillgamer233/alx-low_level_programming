#include <unistd.h>
#include "main.h"
/**
 * _putchar - It writes char c in stdout
 * @c: char to print
 * Return: 1 on success and -1 on error
 */
int _putchar(char c)
{
	return (write(1, $c, 1));
}
