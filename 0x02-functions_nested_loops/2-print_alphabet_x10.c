#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description:  prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: success
 */
void print_alphabet_x10(void);
{
    char ch[] = "abcdefghijklmnoprstuvwxyz";
    int i;
    for (i = 0 ; i <= 10; i++)
	    _putchar(ch);
        _putchar('\n');
}
