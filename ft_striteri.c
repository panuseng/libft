/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <plaophit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:13:49 by plaophit          #+#    #+#             */
/*   Updated: 2023/11/05 11:31:58 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void ft_putstr(unsigned int i, char *s)
// {
// 	while (s[i])
// 	{
// 		write(1, &s[i], 1);
// 		i++;
// 	}
// }

// int main(void)
// {
// 	char *str = "hello";

// 	ft_striteri(str, &ft_putstr);
// 	return (0);
// }
