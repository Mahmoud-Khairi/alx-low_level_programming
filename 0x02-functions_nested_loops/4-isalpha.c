#include "main.h"
/**
 * int _isalpha - entry point
 * Description: checks for alphabetic character.
 * @c: Ascii code of a char
 * Return: 0 or 1
 */
int _isalpha(int c);
{
if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
