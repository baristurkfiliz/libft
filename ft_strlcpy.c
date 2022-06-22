#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t maxlen)
{
	const size_t srclen = ft_strlen(source);
	if (srclen + 1 < maxlen)
		ft_memcpy(dest, source, srclen + 1);
	else if (maxlen != 0)
	{
		ft_memcpy(dest, source, maxlen - 1);
		dest[maxlen - 1] = 0;
	}
	return (srclen);
}
