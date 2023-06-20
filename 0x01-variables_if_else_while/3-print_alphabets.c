#include <stdio.h>

/**
 * main - Print uppercase and lower
 * Return: Always (Success)
 */

int main(void)
{
	char lowcase = 'a';
	char upcase = 'A';

	while (lowcase <= 'z')
	{
	putchar(lowcase);
	lowcase++;
	}
	while (upcase <= 'Z')
	{
	putchar(upcase);
	upcase++;


	}
	putchar('\n');
	return (0);
}

