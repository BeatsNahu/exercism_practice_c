#include "difference_of_squares.h"

unsigned int	sum_of_squares(unsigned int number)
{
	unsigned int	result;

	result = 0;
	while (number > 0)
	{
		result = result + (number * number);
		number--;
	}
	return (result);
}

unsigned int	square_of_sum(unsigned int number)
{
	unsigned int	result;

	result = 0;
	while (number > 0)
	{
		result += number;
		number--;
	}
	result = result * result;
	return (result);
}

unsigned int	difference_of_squares(unsigned int number)
{
	return (square_of_sum(number) - sum_of_squares(number));
}
