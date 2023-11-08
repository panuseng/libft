/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:29:00 by plaophit          #+#    #+#             */
/*   Updated: 2023/11/08 23:01:36 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (d < s && (dst || src))
		ft_memcpy(dst, src, len);
	else
	{
		while (len)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}
