#include "main.h"
/**
 * handles_flag - Calculates no of active flags
 * @format: String that is to print the arguments
 * @i : Character flasg specifier
 *
 * Authors Siyanda & Isreal
 *
 * Return: Flags
 */
int handles_flag(const char *format, int *i)
{
	int k, bat_i;
	int flags = 0;

	/* - + 0 # ' ' */
	/* 1 2 4 8  16 */

	const char FLAGS_CHAR[] = {'-', '+', '0', '#', ' ', '\0'};
	const in FLAGS_ARR[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (bat_i = *i; format[bat_i] != '\0'; k++)
		if (format[bat_i] == FLAG_CHAR[k])
		{
			flags |= FLAGS_ARR[k];
			break;
		}

		if (FLAGS_CHAR[k] == 0)
			break;
}

*i = bat_i - 1;

return (flags);
}
