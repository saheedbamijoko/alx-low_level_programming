#include "holberton.h"

/**
 * main - print sum of multiple of 3 and 5 below 1024
 * Return: 0
 */

int main(void)
{
int n;
int sum;

sum = 0;

for (n = 0; n < 1024; n++)
{
if ((n % 3 == 0) || (n % 5 == 0))
{
sum += n;
}
}
printf("%d\n", sum);
return (0);
}
