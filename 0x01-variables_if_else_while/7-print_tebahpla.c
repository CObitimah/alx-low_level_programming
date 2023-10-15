#include <stdio.h>
/**
 * main - print alphabet in reverse mode
 *
 * Return: always zero
 *
 */
int main(void)
{
	char alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
	alphabets--;
	}
	putchar('\n');
	return (0);
}
