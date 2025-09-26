#include "main.h"

int main(void)
{
    printf("HOME = %s\n", _getenv("HOME"));
    printf("SHELL = %s\n", _getenv("SHELL"));
    return 0;
}
