#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;

	cpy = ft_strnew(len);
	if (!cpy || !s)
		return (NULL);
	return (ft_strncpy(cpy, (char*)s + start, len));
}
