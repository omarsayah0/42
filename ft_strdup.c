/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaletham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 21:43:22 by oaletham          #+#    #+#             */
/*   Updated: 2025/01/15 22:31:42 by oaletham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*dest;
	char	*j;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	i = 0;
	j = ((dest = malloc(len * sizeof (char) + 1)));
	if (!j)
	{
		return (0);
	}
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char s[] = "";
	printf("%s", ft_strdup(s));
	printf("%s", strdup(s));
}*/
