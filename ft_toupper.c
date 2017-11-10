#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c))
	{
		if (c >= 'a' && c <= 'z')
			return (c - 32);
		return (c);
	}
	return (0);
}
