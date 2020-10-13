#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*new;
	int		i;

	str = (char*)s;
	if (!(new = ft_strnew(ft_strlen(str) - 1)))
		return (NULL);
	i = 0;
	while (*str)
		new[i++] = f(*str++);
	return (new);
}
