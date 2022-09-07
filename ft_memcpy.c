/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:53:14 by bturkfil          #+#    #+#             */
/*   Updated: 2022/09/07 03:13:14 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main(int argc, char** argv)
{
	char *dest;
	dest = malloc(15);
	dest = ft_memcpy(dest, argv[1], ft_strlen(argv[1]) + 1);
	printf("%s", dest);
	return (0);
}
*/
