#include "main.h"

/**
 * puts_half - prints the second half of a given string
 * @str: passed string pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;
	half = index / 2;

	if (index % 2 == 1)
		half++;

	while (half < index)
	{
		putchar(str[half]);
		half++;
	}
	putchar('\n');
}
