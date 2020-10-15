#include "libft.h"

static int	is_trimmable(char c, char const *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char		*ft_strtrim(char const *s, char const *set)
{
	size_t	begin;
	size_t	end;
		
	if (!s || !set)
		return (NULL);
	begin = 0;
	while (s[begin] && is_trimmable(s[begin], set))
		begin++;
	end = ft_strlen(s);
	while (end != 0 && is_trimmable(s[end - 1], set))
		end--;
	if (end != 0)
		end -= begin;
	return (ft_substr(s, begin, end));
}
