#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome -  returns 1 if a string is a palindrome and 0 if not.
 * @s: takes input from another.
 * Return: 0 (Success)
*/
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	if (s[0] == s[len - 1])
	{
		s[len - 1] = '\0';
		return (is_palindrome(s + 1));
	}
	else
	{
		return (0);
	}
}
