#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>

int main() {
    char lowercase;
    char uppercase;

    printf("Alphabet in lowercase:\n");
    for (lowercase = 'a'; lowercase <= 'z'; lowercase++) {
        putchar(lowercase);
    }

    printf("\n\nAlphabet in uppercase:\n");
    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++) {
        putchar(uppercase);
    }

    putchar('\n');
    return 0;
}
