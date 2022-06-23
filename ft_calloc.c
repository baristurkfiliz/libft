/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 05:12:14 by bturkfil          #+#    #+#             */
/*   Updated: 2022/06/23 05:12:17 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*c;

	c = malloc (count * size);
	if (c == NULL)
		return (c);
	ft_bzero(c, count * size);
	return (c);
}
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char *x = "selam";
	printf("x = %s\n",x);
	x = ft_calloc(1,1);
	printf("x = %s\n",x);
}
*/
