#include <unistd.h>
/**
 * main  - Prints putchar
 * Return: Always (Success)
 */

int _putchar(char c)
{

	return (write(1,&c,1));
}
