#include<stdio.h>
#include "holberton.h"
/**
 * print_rev - print string in reverse
 * @s: the string to put in reverse
 *
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
for (i = i - 1; i >= 0; i--)
_putchar(s[i]);

_putcar('\n');

}
