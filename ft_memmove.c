/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaletham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:51:38 by oaletham          #+#    #+#             */
/*   Updated: 2025/08/13 19:00:33 by oaletham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d == s || n == 0)
		return (dest);
	if (d > s)
	{
		d = d + n;
		s = s + n;
		while (n--)
		{
			d--;
			s--;
			*d = *s;
		}
	}
	else if (d < s)
		ft_memcpy(dest, src, n);
	return (dest);
}
