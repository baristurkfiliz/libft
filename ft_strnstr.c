/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 05:25:34 by bturkfil          #+#    #+#             */
/*   Updated: 2022/06/23 11:34:59 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t maxlen)
{
	const char	*n;
	const char	*h;
	size_t		nlen;

	nlen = ft_strlen(needle);
	n = needle;
	h = haystack;
	while (maxlen-- && *h)
	{
		if (*h == *n)
		{
			n++;
			if (*n == 0)
			{
				while (nlen--)
					h--;
				return ((char *)(h));
			}	
		}
		else
			n = needle;
		h++;
	}
	return (0);
}
