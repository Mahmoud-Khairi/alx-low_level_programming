#include "main.h"

/**
 * main - Entry
 * Description: prints the alphabet, in lowercase
 * Return: 
*/

void print_alphabet(void)
{
    char al;

    for (al = 'a'; al <= 'z'; al++)
    	_putchar(al);    
	_putchar('\n');
}
