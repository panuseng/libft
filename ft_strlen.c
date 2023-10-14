/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <plaophit@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:14:19 by plaophit          #+#    #+#             */
/*   Updated: 2023/10/14 13:52:23 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	a;

	a = 0 ;
	while (c[a])
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
