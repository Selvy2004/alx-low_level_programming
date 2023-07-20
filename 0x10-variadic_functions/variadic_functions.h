#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

typedef struct print_fn
{
	char format;
	void (*printer)(va_list);
} print_fn_t;

void print_all(const char * const format, ...);

#endif
