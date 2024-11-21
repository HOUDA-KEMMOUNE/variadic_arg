#include "my_lib.h"

int		sum_numbers(int count, ...)
{
	int i;
	int result;
	va_list	args;
	va_start(args, count);
	
	i = 0;
	result = 0;
	while (i < count)
	{
		result += va_arg(args, int);
		i++;
	}

	va_end(args);
	return (result);
}
