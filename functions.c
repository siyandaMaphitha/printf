#include "main.h"

/*************** PRINTS  CHAR ***************/

/**
 * print_char - Prints char
 * @type: Lists of arguments
 * @buffer: Buffer array to handle
 * @flags: Calculates active flags
 * @width: width
 * @precision: Precision specification
 * @size: Size of specifier
 * Return: Numbers of chars printed
 */
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char c = va_arg(tpes, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
}

/**************** PRINTS A STRING ***************/

/**
 * print_string - Prints a string
 * @type: Lists of arguments
 * @buffer: Buffer array to handle 
 * @flag: Calculates the active flags
 * @width: Width
 * @precision: Precision specification
 * @size: Size of specifier
 *
 * Return: Number of chars printed
 */
int print_string(va_list types, char buffer[], 
		int flags, int width, int precision, int size)
{
	int length = 0, i;
	char *str = va_arg(types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
			str = "      ";
	}

	while (str[length] != '\0')
		length++;

	if (precision >= 0 && precision < length)
		length = precision;

	if (width > length)
	{
		if (flags & F_MINUS)
		{
			write(1, &str[0], length);
			for (i = width - length; i > 0; i--)
				write(1, " ", 1);
			return (width);
		}
		else
		{
			for (i = width - length; i > 0; i--)
				write(1, " ", 1);
			write(1, &str[0], length);
			return (width);
		}
	}

	return (write(1, str, length));
}

/**************** PRINTS PERCENT SIGH ***************/

/**
 * print_percent - Prints percent sign
 * @types: Lists of arguments
 * @buffer: Buffer array to handle print
 * @flags: Calculates active flags
 * @width: gets width
 * @precision: Precision specification
 * @size: Size specifier
 *
 * Return: Number of chars print
 */
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(width);
	UNUSED(flags);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}

/*************** PRINT INTIGER ****************/

/**
 * print_int - Print int
 * @type: Lists of arguments
 * @buffer: Buffer array to handle
 * @flags: Calculates active flags
 * @width: get width
 * @precision: Precision Specification
 * @size: Size specifier
 *
 * Return: Number of chars print
 */
int print_int(va_lisy types, char buffer[], 
		int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2;
	int is_negative = 0;
	long int n = va_arg(types, long int);
	unsigned long int num;

	n = convert_size_number(n, size);

	if (n == 0)
		buffer[i--] = '0';

	buffer[BUFF_SIZE - 1] = '\0';
	num = (unigned long int)n;

	if (n < 0)
	{
		num = (unsigned long int)((-1) * n);
		is_nagative = 1;
	}
	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10; 
	}

	i++;

	return (write_number(is_nagative, i, buffer, flags, precision, size, width))
}

/**************** PRINTS BINARY ***************/

/**
 * print_binary - Prints an unsigned number
 * @types: Listss of arguments
 * @buffer: Buffer arrays to handle print
 * @width: gets width
 * @flags: Calcualtes active flags
 * @precision: Precision Specification
 * @size: Size of speicifier
 *
 * Return: Number of char printed
 */
int print_binary(va_list types, char buffer[],
		int flags, int width, int size, int precision)
{
	unsigned int m, n, i, sum;
	unsigned int a[32];
	int count;

	UNUSED(buffer);
	UNUSED(width);
	UNUSED(flags);
	UNUSED(precision);
	UNUSED(size);

	n = va_arg(types, unsigned int);
	m = 2147483648; /** (2 ^ 31) **/
	a[0] = n/m;
	for (i =1; i < 32; i++)
	{
		m /= 2;
		a[i] = (n/m) % 2;
	}
	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			char z = '0' + a[i];

			write(1, &z, 1);
			count++
		}
	}
	
	return (count)
}
