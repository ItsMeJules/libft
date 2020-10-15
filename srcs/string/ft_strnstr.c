#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t j;

	if (len == 0)
		return (NULL);
	i = 0;
	while (str[i] && i < len)
	{
		j = 0;
		while (str[i + j] && i + j < len && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return ((char*)&str[i]);
		i++;
	}
	return (NULL);
}
