#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowecase, uppercase, then new line
 * Return: 0 (End)
 */
int main(void)
{
    char lowercase;
    char uppercase;

    for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
    {
        putchar(lowercase);
    }

    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
    {
        putchar(uppercase);
    }

    putchar('\n');

    return 0;
}
