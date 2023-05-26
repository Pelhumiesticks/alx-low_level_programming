#include <stdio.h>
/**
 * main - program filters out the 99.5% of programming job
 * i: i is the number of integers
 * Return: void
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf(" \n");
return (0);
}
