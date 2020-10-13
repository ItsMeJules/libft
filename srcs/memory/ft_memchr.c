#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ps;
	unsigned char	cp;
	size_t			i;

	ps = (unsigned char *)s;
	cp = (unsigned char)c;
	i = -1;
	while (++i < n)
	{
		if (ps[i] == cp)
			return (&ps[i]);
	}
	return (NULL);
}
