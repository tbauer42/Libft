#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	pc;
	int				i;
	int				len;

	pc = c;
	i = 0;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == pc)
			return (&s[len]);
		len--;
	}
	return (NULL);
}
