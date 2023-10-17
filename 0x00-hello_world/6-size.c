#include <stdio.h>

/**
 * main - a function that prints the size of various types on the computer
 * Return: always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned int)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned int)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned int)sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsigned int)sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsigned int)sizeof(f));
	return (0);
}

