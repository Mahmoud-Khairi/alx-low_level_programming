#include"main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0
*/

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; ++count)
	{
		sum = fib1 + fib2;
		_putchar("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			_putchar("\n");
		else
			_putchar(", ");
	}

	return (0);
}