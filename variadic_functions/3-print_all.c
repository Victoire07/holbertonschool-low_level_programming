#include "variadic_functions.h"

/**
 * print_all -  fonction qui imprime n'importe quoi
 * @format: liste de types d'arguments passes a la fonction
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int ch;
	int in;
	double flo;
	char *str;
	int i = 0;

	va_list args;
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			if (format[i] == 'c')
			{
				ch = va_arg(args, int);
				printf("%c", ch);
			}

			else if (format[i] == 'i')
			{
				in = va_arg(args, int);
				printf("%d", in);
			}

			else if (format[i] == 'f')
			{
				flo = va_arg(args, double);
				printf("%f", flo);
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);

			}

			if (format[i + 1] != '\0')
				printf(", ");
		}
	
		i++;
	}

	va_end(args);


}

typedef struct type_printer 
 {
	char type;
	void (*print_func)(va_list args);
} type_printer;

void print_char(va_list args)
void print_int(va_list args)
void print_float(va_list args)
void print_string(va_list args)
type_printer printers[] = 
{
      {'c', print_char},
      {'i', print_int},
      {'f', print_float},
      {'s', print_string},

  };

