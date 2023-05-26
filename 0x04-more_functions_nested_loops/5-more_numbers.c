#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints a set of number 10 times
 * Return: 0 for success
 */

void more_numbers(void)
{
int i, j;
for (i = 0; i < 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar ('1');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}
