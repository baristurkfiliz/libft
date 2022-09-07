/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:49:43 by bturkfil          #+#    #+#             */
/*   Updated: 2022/09/07 03:45:36 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	dlen;
	char 	*str;

	if (!s)
		return (NULL);
	str = (char *)s;
	dlen = (ft_strlen(str) - start);
	if (len < dlen)
		dlen = (len);
	dest = (char *) malloc(dlen + 1);
	if (!dest)
		return (NULL);
	while (start-- && *str)
		str++;
	dest = ft_memcpy(dest, str, dlen);
	dest[dlen] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(int argc, char** argv)
{
	char *y = ft_substr(argv[1],ft_atoi(argv[2]),ft_atoi(argv[3]));
	printf("x = %s\ny= %s\n",argv[1],y);
}
*/
