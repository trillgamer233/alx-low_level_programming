#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: pointer 1
 * @b: pointer 2
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
