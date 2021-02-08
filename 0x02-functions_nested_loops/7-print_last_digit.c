#include "holberton.h"

/**
 * main - print last digit of a number
 * @n: input number as integer
 * Return: last digit
 */

int print_last_digit(int n);
int main(void)
{
int l;
l = n % 10;

if (n < 0)
{
_putchar(-l + '0');
return (-l);
}
else
{
_putchar(l + '0');
return (l);
}
}
