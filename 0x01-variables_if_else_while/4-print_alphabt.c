#include <stdio.h>

/**
 * main - Print strings except q&e
 * Return: Always (Success)
 */

int main(void)
{
	char alphabet = 'a';
	char e = 'e';
	char q = 'q';

	while (alphabet <= 'z')
	{

	if (alphabet != e && alphabet != q)

	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');

	return (0);
}
