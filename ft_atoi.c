/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 04:57:47 by bturkfil          #+#    #+#             */
/*   Updated: 2022/09/07 06:15:39 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long int	result;
	int		is_neg;
	int 	i;
	int 	check;

	check = 1;
	is_neg = 1;
	i = 0;
	result = 0;
	while (str[i] && (str[i] == '\t' || str[i] == ' ' || str[i] == \
		'\n' || str[i] == '\f' || str[i] == '\r' || str[i] == '\v'))
		i++;
	if (str[i] == '-' && str[i])
		is_neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && check)
	{
		if (result >= 214748364 && str[i] - '0' >= 8 && is_neg == 1)
			return 1;
		else if	(result >= 214748364 && str[i] - '0' >= 9  && is_neg == -1)
			return -1;
		else if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + str[i] - '0';
		else
			check = 0;
		i++;
	}
	return (result * is_neg);
}
/*
#include <stdio.h>
int	main(int argc, char* argv[])
{
	int	i = ft_atoi(argv[1]);
	printf("%i", i);
	return (0);
}
*/
