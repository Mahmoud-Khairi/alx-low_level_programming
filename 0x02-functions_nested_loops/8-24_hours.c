#include "main.h"
/**
 * jack_bauer - entry point
 * Description: prints the last digit of a number.
 * Return: digit of a number
 * @i: Ascii code
 */
void jack_bauer(void)
{
char ch[] = z+y+':'+x+i;
for (int i = 0 ; i < 10 ; i++)
if ( i == 9)
{
i = 0;
x = 1;
}
for (x = 1 ; x < 6 : x++)
if ( x == 5)
{
x = 0;
y = 1;
}
for (y = 1 ;  y < 10 : y++)
if ( y == 9)
{
y = 0;
z = 1;
}
for (z = 1 ; i < 3 : z++)
if ( z == 2 && y == 3)
{
x = 0;
y = 0;
z = 0;
i = 0;
}
_putchar(ch);
}
