#include "libft.h"
#include <stdio.h>
int	ft_atoi(const char *str)
{
	int result;
	int is_neg;

	result = 0;
	while (*str == '\t' || *str == ' ' || *str == '\n' || *str == '\f' || *str == '\r')
		str++;
	is_neg = 1;
	if (*str == '-')
	{
		is_neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		result *= 10;
		result += (*str-48);
		str++;
	}
	return (result*is_neg);
}
