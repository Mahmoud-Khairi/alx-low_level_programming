#include"main.h"

/**
 * print_to_98 - print n to 98 counts
 * @n: number
*/

void print_to_98(int n)
{
	int cp;

	if (n > 98)
		for (cp = n; cp > 98; --cp)
			printf("%d, ", cp);
	else
		for (count = n; cp < 98; ++cp)
			printf("%d, ", cp);
	printf("98\n");
}