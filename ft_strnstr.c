#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t maxlen)
{
	const char *n;
	const char *h;
	size_t	nlen;

	nlen = ft_strlen(needle);
	if (*needle == 0)
		return (char *) (haystack);
	n = needle;
	h = haystack;
	while (maxlen-- && *h)
	{
		if (*h == *n)
		{
			n++;
			if (*n == 0)
			{
				while (nlen--)
				{
					h--;
				}
				return (char *) (h);
			}	
		}
		else
			n = needle;
		h++;
	}
	return (0);
}
