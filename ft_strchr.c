/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 05:19:33 by bturkfil          #+#    #+#             */
/*   Updated: 2022/06/23 18:26:00 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*dest;

	dest = (char *)ft_memchr(str, c, ft_strlen(str) + 1);
	return (dest);
}
