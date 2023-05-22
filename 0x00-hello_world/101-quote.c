#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints a line of text followed by a new line
 * Return: 1 (Success)
 */
int main(void)
{
write(STDERR_FILENO, "and that piece of art is useful\" - ", 34);
write(STDERR_FILENO, "Dora Korpar, 2015-10-19\n", 24);
return (1);
}
