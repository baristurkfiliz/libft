/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:53:14 by bturkfil          #+#    #+#             */
/*   Updated: 2022/07/05 16:24:54 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

void
	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(char*)(dest + i) = *(char*)(src + i);
		i++;
	}
	return (dest);
}
