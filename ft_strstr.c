/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 02:46:16 by plaophit          #+#    #+#             */
/*   Updated: 2023/11/08 23:00:18 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			i = 1;
			while (needle[i] && haystack[i] == needle[i])
				i++;
			if (!needle[i])
				return (haystack);
		}
		haystack++;
	}
}
