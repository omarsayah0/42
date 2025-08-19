/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaletham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:25:02 by oaletham          #+#    #+#             */
/*   Updated: 2025/08/07 20:29:21 by oaletham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;
	size_t	total;

	if (elsize && nelem > SIZE_MAX / elsize)
		return (NULL);
	total = nelem * elsize;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
