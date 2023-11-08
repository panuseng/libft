/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:38:49 by seng              #+#    #+#             */
/*   Updated: 2023/11/08 22:51:59 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	len = ft_strlen(s1) + ft_strlen(s2) +1;
	s = (char *)malloc(sizeof(char) * len);
	if (!s)
		return (NULL);
	ft_strlcpy(s, s1, len);
	ft_strlcat(s, s2, len);
	return (s);
}

// int main(void)
// {
// 	char *str1 = "hello";
// 	char *str2 = " good morning!";

// 	//ft_strjoin(str1, str2);
// 	printf("%s", ft_strjoin(str1, str2));
// 	return (0);
// }
