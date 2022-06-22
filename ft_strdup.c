#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	len;
	void	*result;

	len = ft_strlen(src) + 1;
	result = (char *)malloc(len);
	if (!result)
		return (NULL);
	return ((char *)ft_memcpy(result, src, len));
}
