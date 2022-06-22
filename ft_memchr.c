#include <stdlib.h>

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)src;
	while (n--)
	{
		if (*s == (unsigned char)c)
			return ((void *) s);
		s++;
	}
	return (0);
}
