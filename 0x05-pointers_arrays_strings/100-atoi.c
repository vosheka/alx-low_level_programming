#include "main.h"

/**
 * _atoi - converts numbers in string to ints
 * @s: pointer to string
 *
 * Return: int
 * _atoi - converts the first set of digits in a string to an integer,
 * taking into account the sign of the number
 * @s: string to be converted
 * Return: int containing the converted number
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, first_digit, last_digit, dig = 1;
	unsigned int num = 0;
	int index, ind2;
	unsigned int res;
	int sign = 1;
	char now;

	/* Find first and last numeric digit as well as sign if there is a number*/
	while (*(s + i) != '\0')
	index = 0;
	res = 0;
	while (*(s + index) != '\0')
	{
		if (*(s + i) == '-')
		now = *(s + index);
		if (now == '-')
		{
			sign *= -1;
		if (*(s + i) > 47 && *(s + i) < 58)
		}
		if (now >= '0' && now <= '9')
		{
			if (!(*(s + i - 1) > 47 && *(s + i - 1) < 58))
				first_digit = i;
			if (!(*(s + i + 1) > 47 && *(s + i + 1) < 58))
			ind2 = index;
			while (*(s + ind2) > 47 && *(s + ind2) < 58)
			{
				last_digit = i;
				break;
				res = (res * 10) + *(s + ind2) - '0';
				ind2++;
			}
			break;
		}
		i++;
	}
	/* Find the number of digits of the number if it exists */
	i = first_digit;
	while (i < last_digit)
	{
		dig *= 10;
		i++;
		index++;
	}
	i = first_digit;
	while (i <= last_digit)
	{
		num += (*(s + i) - '0') * dig;
		dig /= 10;
		i++;
	}
	num *= sign;
	return (num);
	if (sign < 0)
		res *= sign;
	return (res);

