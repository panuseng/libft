/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <plaophit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 02:46:16 by plaophit          #+#    #+#             */
/*   Updated: 2023/10/15 12:46:26 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;

	j = 0;
	if (!*needle)
		return ((char *) haystack);
	while (*haystack && j < len)
	{
		if (*haystack == *needle)
		{
			i = 1;
			while (needle[i] && haystack[i] == needle[i])
				i++;
			if (!needle[i])
				return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}

// char *ft_strstr(char *str, char *to_find);

// int main() {
//     char *str = "Hello, this is a test string.";
//     char *to_find = "his";
// 	int a = 0;
//     char *result = ft_strnstr(str, to_find,a);

//     printf("Substring found at index: %s\n", result);
//     return 0;
// }
