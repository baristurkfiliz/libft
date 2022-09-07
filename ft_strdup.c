/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 05:19:55 by bturkfil          #+#    #+#             */
/*   Updated: 2022/09/07 03:35:47 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	void	*result;

	len = ft_strlen(src) + 1;
	result = (char *)malloc(len);
	if (!result)
		return (NULL);
	return((char *)ft_memcpy(result, src, len));
}
