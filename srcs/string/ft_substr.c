#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;

	if (!s || start >= ft_strlen(s))
		return (NULL);
	i = 0;
	s += start;
	while (s[i] && i < len)
		i++;
	if (!(cpy = ft_strnew(i)))
		return (NULL);
	i = -1;
	while (++i < len && s[i])
		cpy[i] = s[i];
	cpy[i] = 0;
	return (cpy);
}
