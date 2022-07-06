/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 12:56:08 by bturkfil          #+#    #+#             */
/*   Updated: 2022/07/01 17:11:54 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	__intlen(const int n)
{
	int	result;
	int	x;

	result = 0;
	x = n;
	if (x < 0)
		result++;
	while (x)
	{
		result++;
		x = x / 10;
	}
	return (result + 1);
}

char	*ft_itoa(int n)
{
	int		x;
	char	*result;
	int		rlen;
	int		i;

	x = n;
	i = 0;
	rlen = __intlen(x);
	result = (char *) malloc (rlen * sizeof(char));
	rlen = rlen - 1;
	if (x < 0)
	{
		result[i++] = '-';
		x = x * -1;
	}
	i = (rlen - 1);
	while (x > 0 || (i >= 0 && !result[i]))
	{
		result[i--] = ((x % 10) + 48);
		x = x / 10;
	}
	result[rlen + 1] = 0;
	return (result);
}
/*
#include <stdio.h>
int main()
{
    int x = 23121;
    char    *y = ft_itoa(x);

    while (*y)
    {
        printf("%c", *y++);
    }
    printf("\n");
    return (0);
}
*/
