#include "main.h"
/**
* islower - Prints a function that checks for lowercase character
*
* Returns 0 otherwise
* Returns 1 if c is lowercase
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

