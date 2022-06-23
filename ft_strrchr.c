/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:37:47 by bturkfil          #+#    #+#             */
/*   Updated: 2022/06/23 11:38:48 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)str;
	while (dest[i])
		i++;
	while (i >= 0)
	{
		if (dest[i] == (unsigned char)c)
			return (dest + i);
		i--;
	}
	return (NULL);
}
