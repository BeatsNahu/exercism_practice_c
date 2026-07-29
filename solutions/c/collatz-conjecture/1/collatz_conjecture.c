#include "collatz_conjecture.h"

int	steps(int start)
{
	int	count;

	if (start <= 0)
		return (ERROR_VALUE);
	count = 0;
	while (start > 1)
	{
		if ((start & 1) == 1)
			start = (start * 3) + 1;
		else
			start = start / 2;
		count++;
	}
	return (count);
}
