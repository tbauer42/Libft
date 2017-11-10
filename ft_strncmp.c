#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (*s1 && *s1==*s2 && (i < n))
	{
		s1++;
		s2++;
	}
	return ((int)*s1 - (int)*s2);
}
