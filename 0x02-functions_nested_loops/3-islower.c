#include "main.h"

/**
 * _islower - Checks for lower case alphabet
 * @c: character to be checked
 * Return: if character is lowercase, otherwise let it be
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
