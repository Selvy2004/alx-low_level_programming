#include "main.h"

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return sum;
}

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	print_fn_t print_fns[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{0, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (print_fns[j].format)
		{
			if (print_fns[j].format == format[i])
			{
				printf("%s", separator);
				print_fns[j].printer(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}

void print_char(va_list args)
{
	char c = va_arg(args, int);
	printf("%c", c);
}

void print_integer(va_list args)
{
	int num = va_arg(args, int);
	printf("%d", num);
}

void print_float(va_list args)
{
	double num = va_arg(args, double);
	printf("%f", num);
}

void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
