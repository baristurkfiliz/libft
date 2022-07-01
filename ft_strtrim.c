/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:46:07 by bturkfil          #+#    #+#             */
/*   Updated: 2022/07/01 16:48:31 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*trim1(char const *str, char const *set)
{
	int		x;
	int		dewamke;
	char	*s1;

	s1 = (char *)str;
	dewamke = 1;
	x = 0;
	while (*s1 && dewamke)
	{
		dewamke = 0;
		x = 0;
		while (set[x])
		{
			if (set[x] == *s1)
			{
				dewamke = 1;
				s1++;
			}
			x++;
		}
	}
	return (s1);
}

char	*trim2(char const *str, char const*set)
{
	char	*s1;
	int		x;
	int		dewamke;
	int		i;

	s1 = (char *)str;
	dewamke = 1;
	i = ft_strlen(s1) - 1;
	x = 0;
	while (s1[i] && dewamke)
	{
		dewamke = 0;
		x = 0;
		while (set[x])
		{
			if (set[x] == s1[i])
			{
				dewamke = 1;
				s1[i] = '\0';
			}
			x++;
		}
		i--;
	}
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	str = ft_strdup(s1);
	str = trim1(str, set);
	str = trim2(str, set);
	len = ft_strlen(str);
	str = ft_strdup(str);
	if (!str)
		return (0);
	return (str);
}
