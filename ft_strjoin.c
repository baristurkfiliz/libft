/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 05:20:49 by bturkfil          #+#    #+#             */
/*   Updated: 2022/09/07 04:40:34 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	size_t	dlen;
	size_t	x;
	size_t	i;

	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1) || !(s2))
		return (!(s1) ? ft_strdup(s2) : ft_strdup(s1));
	i = 0;
	x = 0;
	dlen = (ft_strlen(s1) + ft_strlen(s2));
	dest = (char *) malloc(dlen);
	if (!dest)
		return (NULL);
	while (s1[x])
		dest[i++] = s1[x++];
	x = 0;
	while (s2[x])
		dest[i++] = s2[x++];
	dest[dlen] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char x[50] = "as";
	char y[50] = "df";
	char *z = ft_strjoin(x,y);
	printf("%s\n",z);
}
*/
