#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 *
 * @a: A pointer of type int
 *
 * @b: A pointer of type int
 *
 * Return: void function
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
