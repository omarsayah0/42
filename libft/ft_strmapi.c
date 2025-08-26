/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaletham <oaletham@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:01:26 by oaletham          #+#    #+#             */
/*   Updated: 2025/08/18 17:01:54 by oaletham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static size_t	len(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	my_toupper(unsigned int i , char c)
{
	if (i % 2 == 0)
		return (c - 32);
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	slen;
	char	*string;
	size_t	i;

	if (!s || !f)
		return (NULL);
	slen = len(s);
	string = (char *)malloc(slen + 1);
	if (!string)
		return (NULL);
	i = 0;
	while (s[i])
	{
		string[i] = f((unsigned int)i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}

int	main(void)
{
	char o[]= "omar";
	printf("%s\n", ft_strmapi(o, my_toupper));
}
	
