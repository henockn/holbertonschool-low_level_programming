#include<stdio.h>
#include "holberton.h"
/**
 * print_array - print numbered index of an array
 * @a: array to be printed
 * @n: number of elements of an array to be printed
 *
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}
