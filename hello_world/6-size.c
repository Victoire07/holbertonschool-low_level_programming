#include <stdio.h>
/**
* main - Programme C affchnt taille de types sur l'ordi execute
*/
int main(void)
{
	printf("Size of a char: %lu byte\n", sizeof(char));
	printf("Size of a int: %lu bytes\n", sizeof(int));
	printf("Size of a long int: %lu bytes\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes\n", sizeof(long long int));
	printf("Size of a float int: %lu bytes\n", sizeof(float));
        return (0);
}
