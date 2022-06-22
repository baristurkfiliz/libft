#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*dest;

	dest = (char *)ft_memchr(str, c, ft_strlen(str));
	return (dest);
}
