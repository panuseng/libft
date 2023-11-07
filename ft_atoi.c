/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <plaophit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:16:09 by plaophit          #+#    #+#             */
/*   Updated: 2023/11/07 14:25:01 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num(const char *str, int i)
{
	int	num;

	num = 0;
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
	{
		num *= 10;
		num += (str[i] - 48);
		i++;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	size_t	i;
	long	res;
	long	ng_check;

	i = 0;
	res = 0;
	ng_check = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			ng_check *= -1;
		i++;
	}
	return (num(str, i) * ng_check);
}
