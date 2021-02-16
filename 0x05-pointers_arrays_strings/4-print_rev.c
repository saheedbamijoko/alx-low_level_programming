#include "holberton.h"

/**
 * print_rev - toma la cadena de la funcion.
 * @s: value taken from main
 * Return: (0)
 */
void print_rev(char *s)
{
int len = 0;
int i;
/* iterate to find length of string and point to last character */
while (*s != '\0')
{
len++;
++s;
}

/* go back to character before null character */
s--;
/* print string reversed */
for (i = len; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
