#include "reverse_string.h"
#include "stdlib.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*reverse(const char *value)
{
	char	*str;
	int	len;
	int	i;

	len = ft_strlen(value);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (len > 0)
	{
		str[i] = value[len - 1];
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
