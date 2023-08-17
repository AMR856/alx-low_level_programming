#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - A function to print multiple types
 * @format: The specifiers
 *
 * Return: It returns void (Nothing)
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *str;
	char *mySep = "";

	va_start(args, format);

	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c",  mySep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", mySep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", mySep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
					{
						printf("%s(nil)", mySep);
						break;
					}
					printf("%s%s", mySep, str);
					break;
			}
			i++;
			mySep = ", ";
		}
	}
	printf("\n");
	va_end(args);
}
