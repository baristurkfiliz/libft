/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 14:06:05 by bturkfil          #+#    #+#             */
/*   Updated: 2022/07/01 17:09:14 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	int		i;
	char	*str;

	str = ft_itoa(nbr);
	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}
#include <fcntl.h>
int main()
{
	int	nbr = 1234;
	int fd =  open("x", O_RDWR);
	ft_putnbr_fd(nbr, fd);
	return 0;
}
		
