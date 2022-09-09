#include <stdio.h>

/**
 * main - print size of variables
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char	c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of a char; %id byte(s)\n", sizeof(c));
	printf("Size of an int; %id byte(s)\n", sizeof(i));
	printf("Size of a long int; %id byte(s)\n", sizeof(l));
	printf("Size of a long long int; %id byte(s)\n", sizeof(ll));
	printf("Size of a float; %id byte(s)\n", sizeof(f));
	return (0);
}
