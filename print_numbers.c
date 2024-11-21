#include "my_lib.h"

void	print_numbers(int count, ...)
{
	int	i;
	int r;
	va_list args;
	va_start(args, count);

	i = 0;
	r = 0;
	while (i < count)
	{
		r = va_arg(args, int);
		printf("  %d  ", r);
		i++;
	}
	printf("\n");
	va_end(args);
}
