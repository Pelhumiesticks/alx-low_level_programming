#include <stdio.h>

/**
 * main - A program that prints alphabet in lowercase using putchar
 * Return: 0 (Success)
 */
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{

putchar(letter);
}

putchar('\n');

return (0);
}
