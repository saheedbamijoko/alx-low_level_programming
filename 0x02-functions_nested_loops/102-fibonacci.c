#include "holberton.h"

/**
 * main - print first 50 fiboacci numbers
 * Return: 0
 */

{
int counter;
int fibo = 50;
int a = 1;
int b = 2;}

for (counter = 1; counter <= (fibo / 2); counter++)
{
printf("%li %li ", a, b);
a += b;
b += a;
}
if (fibo % 2 == 1)
printf("%li", a);

printf("\n");

return (0);
}
