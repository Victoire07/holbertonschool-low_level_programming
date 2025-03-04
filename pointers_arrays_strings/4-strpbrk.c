#include "main.h"
#include <???>

/* 
 * Faire mon comm Betty
 *
*/ 

char *_strpbrk(char *s, char *accept)
{
	char *ptr = s;
	
	while (*s)
	{
		for (int j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return s;
			}
		}
		s++;
	}
	return NULL;
}
