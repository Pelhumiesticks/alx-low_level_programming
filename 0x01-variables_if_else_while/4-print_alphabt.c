#include <stdio.h>

/**
 * main - A program that prints all alphabet except q & e in lowercase using putchar
 * Return: 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
            putchar(letter);
    }

    putchar('\n');

    return (0);
}
