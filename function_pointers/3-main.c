#include "3-calc.h"

/**
 * main - Point d'entree du programme de la calculatrice
 * @argc: Nombre d'arguments
 * @argv: Tableau de chaines d'arguments
 *
 * Return: 0 if successful, or an error code (98, 99, 100)
 */

int main(int argc, char *argv[])
{
    int a, b;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    if (get_op_func(argv[2]) == NULL)
    {
        printf("Error\n");
        return (99);
    }

    if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
    {
        printf("Error\n");
        return (100);
    }
    
    op_func = get_op_func(argv[2]);
    printf("%d\n", op_func(a, b));

    return (0);
}
