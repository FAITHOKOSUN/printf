#include "main.h"
/**
 * _printf - printf function
 * @format: const char pointer
 * Return: count
 */

int _printf(const char *format, ...)
{
	int count = 0;
	int i;
	va_list arg;

	va_start(arg, format);
	for (i = 0;  format[i] != '\0';)
	{
		if (format[i] != '%')
		{
			count += _putchar(format[i]);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != ' ')
		{
			switch (format[i + 1])
			{
				case 'c':
					count += _putchar(va_arg(arg, int));
					break;
				case 's':
					count += print_string(va_arg(arg, char*));
					break;
				case '%':
					count += _putchar('%');
					break;
				case 'd':
					count += print_num(va_arg(arg, int));
					break;
				case 'i':
					count += print_num(va_arg(arg, int));
					break;
				default:
					break;
			}
			i += 2;
		}
	}
	va_end(arg);
	return (count);
}
