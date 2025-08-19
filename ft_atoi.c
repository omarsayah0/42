/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaletham <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:28:58 by oaletham          #+#    #+#             */
/*   Updated: 2025/01/14 21:09:11 by oaletham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
##
int	index1(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
			i++;
		else
			return (i);
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	number;
	int	j;
	int	i;
	int	string[50];
	int	sign;

	sign = 1;
	number = 0;
	i = index1(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	j = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		string[j] = str[i] - '0';
		number = number * 10 + string[j];
		j++;
		i++;
	}
	return (number * sign);
}
