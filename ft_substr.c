/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:49:43 by bturkfil          #+#    #+#             */
/*   Updated: 2022/06/23 11:49:44 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	dlen;

	dlen = (ft_strlen(s) - start);
	if (len < dlen)
		dlen = (len);
	dest = (char *) malloc(dlen + 1);
	if (!dest)
		return (NULL);
	while (start-- && *s)
	{
		s++;
	}
	dest = ft_memcpy(dest, s, dlen);
	dest[dlen + 1] = 0;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char x[30] = "selam bro naber";
	char *y = ft_substr(x,1,100);
	printf("x = %s\ny= %s\n",x,y);
}*/
