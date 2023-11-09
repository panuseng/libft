/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:14:19 by plaophit          #+#    #+#             */
/*   Updated: 2023/11/09 19:11:31 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	a;

	a = 0 ;
	while (s[a])
		a++;
	return (a);
}

// int main(void)
// {
// 	char *str;

// 	str = "mahmudul";
// 	printf("%zu", ft_strlen(str));
// 	return (0);
// }
