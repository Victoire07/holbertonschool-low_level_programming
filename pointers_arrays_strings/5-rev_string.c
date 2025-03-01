#include "main.h"
/**
 * rev_string - Fonction qui inverse une chaine de caracteres
 * @s: Pointeur vers la chai®ne de cars Ã  inver
 *
 * Cette fonction modifie la chaÃ®ne en place sans utilise e©moire suppe©meni
 */
void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	for (i = 0; i < j; j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		i++;
	}
}
