#include "hamming.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


int	compute(const char *lhs, const char *rhs)
{
	int	i;
	int	counter;

	if (ft_strlen(lhs) != ft_strlen(rhs))
		return (-1);
	i = 0;
	counter = 0;
	while (lhs[i])
	{
		if (lhs[i] != rhs[i])
			counter++;
		i++;
	}
	return (counter);
}
