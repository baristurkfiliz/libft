/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 05:20:49 by bturkfil          #+#    #+#             */
/*   Updated: 2022/06/23 05:20:50 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	char	*d;
	size_t	dlen;

	dlen = (ft_strlen(s1) + ft_strlen(s2) + 1);
	d = (char *) malloc(dlen);
	dest = d;
	if (!d)
		return (0);
	while (*s1)
		*dest++ = *s1++;
	while (*s2)
		*dest++ = *s2++;
	dest[dlen] = 0;
	return (d);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char x[50] = "selam bro";
	char y[50] = "naber beyaa";
	char *z = ft_strjoin(x,y);
	printf("%s\n",z);
}*/
