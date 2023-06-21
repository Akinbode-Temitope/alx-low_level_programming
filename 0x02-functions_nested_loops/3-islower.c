#include "main.h"

/**
 * _islower - Checks for lowercase
 * @c: The character to be checked
 * Return: 1 forr lowercase or 0 for anythig else
 */

int _islower(int c)
{
	if (c >= 97 || c <= 122)
	{
	return (1);
	}
	return (0);
}
