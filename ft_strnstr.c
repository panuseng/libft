/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 02:46:16 by plaophit          #+#    #+#             */
/*   Updated: 2023/11/08 23:00:27 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*needle)
		return ((char *) haystack);
	if (len == 0)
		return (0);
	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[j])
			j++;
		else
		{
			i -= j;
			j = 0;
		}
		if (!needle[j])
			return ((char *)haystack + i - j + 1);
		i++;
	}
	return (0);
}
