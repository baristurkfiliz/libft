/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:06:05 by bturkfil          #+#    #+#             */
/*   Updated: 2022/07/01 15:56:12 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}
/*
#include <fcntl.h>
int main()
{
	char	str[50] = "selam bro naber";
	int fd =  open("x", O_RDWR);
	ft_putstr_fd(str, fd);
	return 0;
}
*/		
