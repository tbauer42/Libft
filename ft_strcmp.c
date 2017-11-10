#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (*s1 && *s1==*s2)
	{
		s1++;
		s2++;
	}
	return ((int)*s1 - (int)*s2);
}
