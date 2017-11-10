
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	k = 0;
	if (s2[i] == '\0')
		return ((char*)(s1));
	while (i < n && s1[i])
	{
		j = i;
		k = 0;
		while (s1[j] == s2[k] && j < n)
		{
			j++;
			k++;
			if (s2[k] == '\0')
				return ((char*)(&s1[i]));
		}
		i++;
	}
	return (NULL);
}
