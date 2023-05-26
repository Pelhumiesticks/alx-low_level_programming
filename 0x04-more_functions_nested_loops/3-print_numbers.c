#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints a set of number
 * Return: 0 for success
 */

void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
