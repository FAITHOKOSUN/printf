#include "main.h"
/**
* print_num - function to print numbers
* @val: paraneter passed to function
* Return:count
*/
int print_num(int val)
{
	int count = 0;

	if (val < 0)

	{
		count += _putchar('-');
		val = val * -1;
	}

	if (val / 10)
	{
		count += print_num(val / 10);
		count += _putchar(val % 10 + '0');
	}
	return (count);
}
