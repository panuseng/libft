/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:53:31 by plaophit          #+#    #+#             */
/*   Updated: 2023/11/08 23:01:21 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_nbr(int size, int c, int n, char *str)
{
	while (size > c)
	{
		str[size - 1] = n % 10 + '0';
		n = n / 10;
		size--;
	}
}

static size_t	getlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
	{
		n *= -1;
		len++;
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	c;
	size_t	len;
	char	*str;

	c = 0;
	len = getlen(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (n == -2147483648)
	{
		str[0] = '-';
		str[1] = '2';
		n = 147483648;
		c = 2;
	}
	if (n < 0)
	{
		str[0] = '-';
		c = 1;
		n = -n;
	}
	ft_nbr(len, c, n, str);
	str[len] = '\0';
	return (str);
}
