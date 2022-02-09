#include "ft_abs.h"
#include <stdio.h>

int main(void)
{
	int i = -4;
	int n;
	while (i < 3)
	{
		n = ABS(i);
		printf("abs %i \n", n);
		i++;
	}	
	return (0);
}
