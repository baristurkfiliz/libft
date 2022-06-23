/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 05:23:03 by bturkfil          #+#    #+#             */
/*   Updated: 2022/06/23 11:58:41 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t maxlen)
{
	size_t	srclen;

	srclen = ft_strlen(source);
	if (srclen + 1 < maxlen)
		ft_memcpy(dest, source, srclen + 1);
	else if (maxlen != 0)
	{
		ft_memcpy(dest, source, maxlen - 1);
		dest[maxlen - 1] = 0;
	}
	return (srclen);
}
