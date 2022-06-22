#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *dest;
	int	i;

	i = 0;
	dest = (char *)str;
	while (dest[i])
		i++;
	while (i >= 0)	
	{
		if (dest[i] == (unsigned char)c)
			return(dest + i);
		i--;
	}
	return (NULL);
}
