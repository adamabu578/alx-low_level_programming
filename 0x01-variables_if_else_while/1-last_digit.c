#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always return 0 (Success)
 */
int main(void)
{
	int n;

	int m;

	srand(time(0));
	n = rand() % 201 - 100;
	m = n % 10;

	printf("Last digit 0f %d is %d and is", n, m);
	if (m > 5) 
		printf("greater than 5\n");
	else if (m == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");

	return (0);
}
