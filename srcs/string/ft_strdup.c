#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;
	
	i = 0;
	while (s[i])
		i++;
	if (!(dup = malloc(i * sizeof(char))))
		return (NULL);
	i = -1;
	while (s[++i])
		dup[i] = s[i];
	dup[i] = 0;
	return (dup);
}
