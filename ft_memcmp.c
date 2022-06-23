/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 05:17:35 by bturkfil          #+#    #+#             */
/*   Updated: 2022/06/23 18:32:05 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
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
}*/

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int					i;
	const unsigned char	*_str1;
	const unsigned char	*_str2;

	i = 0;
	_str1 = (const unsigned char *) str1;
	_str2 = (const unsigned char *) str2;
	while (n--)
	{
		if (_str1[i] == _str2[i])
			i++;
		else
			return (_str1[i] - _str2[i]);
	}
	return (0);
}
