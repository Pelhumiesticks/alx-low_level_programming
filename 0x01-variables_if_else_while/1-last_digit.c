#include <stdlib.h>
#include <time.h>
/*
 *  main - The program assigns a random number to the variable upon execution
 *  Return: Always return 0 after successful execution
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	return (0);
}
