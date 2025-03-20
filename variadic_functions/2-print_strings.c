#include "variadic_functions.h"

/**
 * print_strings - fonction qui imprime des strings + nouvelle ligne
 * @separator: la string a imprimer entre les strings
 * @n: Le nombre de chaines transmises a la fonction
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		printf("(nil)");
		else
		printf("%s", str);
		if (separator != NULL && i < n - 1)
		printf("%s", separator);

	}

	printf("\n");
}
