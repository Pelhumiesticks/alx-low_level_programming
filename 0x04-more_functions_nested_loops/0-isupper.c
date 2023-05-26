#include "main.h"
#include <stdio.h>

int _isupper(int c);
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}

/**
 * main - check for upper case characters
 * Return: 0 if otherwise
 */

int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));
c = 'a';
printf("%c: %d\n", c, _isupper(c));
return (0);
}
