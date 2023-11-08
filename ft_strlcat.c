/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:09:58 by plaophit          #+#    #+#             */
/*   Updated: 2023/11/08 23:00:47 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	start;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	if (i >= dstsize)
		return (dstsize + ft_strlen(src));
	start = i;
	while (i < dstsize - 1 && src[i - start])
	{
		dst[i] = src[i - start];
		i++;
	}
	dst[i] = '\0';
	return (start + ft_strlen(src));
}

// int main()
// {
//     char first[] = "This is ";
//     char last[] = "a potentially long string";
//     int r;
//     int size = 40;
//     char buffer[size];

//     strcpy(buffer,first);
//     r = ft_strlcat(buffer,last,size);

//     puts(buffer);
//     printf("Value returned: %d\n",r);
//     if( r > size )
//         puts("String truncated");
//     else
//         puts("String was fully copied");

//     return(0);
// }
