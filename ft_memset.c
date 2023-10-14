/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <plaophit@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:35:35 by plaophit          #+#    #+#             */
/*   Updated: 2023/10/14 01:08:00 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *) b;
	while (len)
	{
		*str = (unsigned char)c;
		str++;
		len--;
	}
	return (b);
}

int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	printf("%s",str);
	ft_memset(str, '$', 5);
	printf("\n");
	printf("%s",str);
	return (0);
}
