#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if numbers are 0 - 9
 * @char: char to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
