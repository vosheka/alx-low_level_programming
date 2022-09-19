#include "main.h"

/**
 * puts_half - prints the second half of a given string
 * @str: passed string pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++
	for (i /= 2; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}

	_putchar('\n');
}
