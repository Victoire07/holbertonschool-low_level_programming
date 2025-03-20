#include "variadic_functions.h"

/**
 * print_numbers - Fonction qui imprime des nbres, suivis d'une nouvelle ligne
 * @separator: La chaine de caracteres a imprimer entre les nombres
 * @n: Le nombre d'entiers transmis a la fonction
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(args);
}
