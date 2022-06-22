#include "libft.h"
size_t ft_strlcat(char *dest, const char *source, size_t maxlen)
{
	char *d;
	const char *s;
	size_t n;
	size_t dlen;

	d = dest;
	s = source;
	n = maxlen;
	while (n-- && *d)
		d++;
	dlen = d - dest;
	n = maxlen - dlen;
	if (!n)
		return(dlen + ft_strlen(s));
	while (*s)
	{
		if (n > 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = 0;
	return (dlen + (s - source));
}
