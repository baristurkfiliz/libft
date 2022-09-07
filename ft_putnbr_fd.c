/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:06:05 by bturkfil          #+#    #+#             */
/*   Updated: 2022/09/07 05:29:38 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	display_nbr(int n, int fd)
{
	if (n >= 10)
		display_nbr(n / 10, fd);
	write(fd, &"0123456789"[n % 10], 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	display_nbr(n, fd);
}
/*
#include <fcntl.h>
int main()
{
	int	nbr = 1234;
	int fd =  open("x", O_RDWR);
	ft_putnbr_fd(nbr, fd);
	return 0;
}
*/		
