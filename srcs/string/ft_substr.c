#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;

	if (!s || len <= 0 || start >= ft_strlen(s))
		return (NULL);
	cpy = ft_strnew(len);
	if (!cpy)
		return (NULL);
	if (start >= ft_strlen(s))
		return ("");
	return (ft_strncpy(cpy, (char*)s + start, len));
}
