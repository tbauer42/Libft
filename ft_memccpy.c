/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbauer <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 12:37:26 by tbauer            #+#    #+#             */
/*   Updated: 2017/11/08 12:54:50 by tbauer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	pc;
	size_t			i;
	char			*pdest;
	const char		*psrc;

	pc = c;
	i = 0;
	pdest = dest;
	psrc = src;
	while (i < n)
	{
		pdest[i] = psrc[i];
		if (pdest[i] == pc)
			return (&dest[i + 1]);
		i++;
	}
	return (NULL);
}
