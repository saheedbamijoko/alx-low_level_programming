#include "holberton.h"

/**
 * print_alphabet_x10 - print 10times the alphabet in lowercase
 * Return: void.
 */

void print_alphabet_x10(void)
{
char letter;
int counter;

for (counter = 1; counter <= 10; counter++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar (letter);
}
_putchar ('\n');
}
}
