#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: Alway 0 (Success)
 */
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int lastDigit = n % 10;
    printf("Last digit of %d is ", n);

    if (lastDigit > 5) {
        printf("%d and is greater than 5\n", lastDigit);
    } else if (lastDigit == 0) {
        printf("%d and is 0\n", lastDigit);
    } else {
        printf("%d and is less than 6 and not 0\n", lastDigit);
    }

    return 0;
}

