#include <stdio.h>

/**
 * main - A program that prints all possible combinations of 2 2-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int num1, num2;

for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = num1 + 1; num2 <= 99; num2++)
{
if (num1 < 10)
{
putchar('0');
}
printf("%d", num1);

putchar(' ');

if (num2 < 10)
{
putchar('0');
}
printf("%d", num2);

if (num1 != 99 || num2 != 99)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
