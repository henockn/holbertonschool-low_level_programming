#include<stdio.h>
#include "holberton.h"
/**
 * puts2 - print every other character
 * @str: string
 *
 */
void puts2(char *str)
{
int i, j = 0;
while (str[i] != '\0')
{
i++;
}
while (j < i)
{
_putchar(str[j]);
j += 2;
}
_putchar('\n');
}
