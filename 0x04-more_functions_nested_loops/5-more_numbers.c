#include "main.h"

/**
* more_numbers - Print numbers from  0 to 14 10 times
* Return: void
*/


void more_numbers(void)
{
int i, d;
for (i = 1; i <= 10; i++)
{
for (d = 0; d <= 14; d++)
{
 if (d >= 10)
_putchar('1');
_putchar(d % 10 + '0');
}
_putchar('\n');
}

}


~
