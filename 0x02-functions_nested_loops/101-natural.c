#include"main.h"

/**
 * main - Entry point
 * Description: computes and prints the s of all the multiples
 * Return: 0
*/

int main(void)
{
	int s, n;

	for (n = 0; n < 1024; ++n)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
			s += n;
	}
	_putchar(s);

	return (0);
}
