#include "main.h"

/**
 * set_string -  sets the value of a pointer to a char.
 *
 *@s: takes the input from another.
 *@to: takes the input from another.
*/

void set_string(char **s, char *to)
{
	int i, len;
	char *new_s;

	len = strlen(to);
	new_s = (char *) malloc(len + 1);

	for (i = 0; i < len; i++)
	{
		*(new_s + i) = *(to + i);
	}
	*(new_s + len) = '\0';
	*s = new_s;
}
