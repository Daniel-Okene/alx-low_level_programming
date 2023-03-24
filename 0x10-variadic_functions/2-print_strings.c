#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: seperator to use
 * @n: numbber of variable arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap, nap;

	va_start(ap, n);
	va_start(nap, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
		{
			if (va_arg(ap, char *))
				printf("%s", va_arg(nap, char *));
			else
				printf("(nil)");
		}
		else if (separator && i == n - 1)
		{
			if (va_arg(ap, char *))
				printf("%s", va_arg(nap, char *));
			else
				printf("(nil)");
		}
		else
		{
			if (va_arg(ap, char *))
				printf("%s%s", va_arg(ap,char *), separator);
			else
				printf("(nil)%s", separator);
		}
	}

	va_end(ap);
	va_end(nap);
	printf("\n");
}

