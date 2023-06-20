#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Remain: Always 0 (Success)
 */
int main(void)
/* betty style doc for function main goes there */
{
	char c;

	char d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
