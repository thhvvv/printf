#include "main.h"
/**
 * get_size - Calculate the size
 * @format: Formatted string that prints arguments
 * @a: List of arguments
 * Return: Precision
 */
int get_size(const char *format, int *a)
{
	int cur_i = *a + 1;
	int size = 0;

	if (format[cur_i] == 'l')
		size = S_LONG;
	else if (format[cur_i] == 'h')
		size = S_SHORT;
	if (size == 0)
		*a = cur_i - 1;
	else
		*a = cur_i;
	return (size);
}
