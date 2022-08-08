#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
       int n = _printf("hello %% %c %s %d %i", 'A',"FAITH", 45, 0);
     //_printf("\nCharacter:[%c]", 'H');
	printf("\nn = %d\n", n);

	return (0);
}
