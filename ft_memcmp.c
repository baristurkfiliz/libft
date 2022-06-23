/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 05:17:35 by bturkfil          #+#    #+#             */
/*   Updated: 2022/06/23 12:27:53 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*c_s1;
	const char	*c_s2;

	c_s1 = (const char *)s1;
	c_s2 = (const char *)s2;
	while (n--)
	{
		if (*c_s1 != *c_s2)
		{
			if ((*c_s2 - *c_s1) < 0)
				return (*c_s1 - *c_s2);
			return (*c_s2 - *c_s1);
		}
		c_s1++;
		c_s2++;
	}
	return (0);
}
