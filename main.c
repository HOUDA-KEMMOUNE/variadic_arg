#include "my_lib.h"

int main()
{
	int	r = sum_numbers(3, 2, 5, 9);
	printf("The sum of: ");
	print_numbers(3, 2, 5, 9);
	printf("Equals to: %d\n", r);
}
