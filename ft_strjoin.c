/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seng <seng@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:38:49 by seng              #+#    #+#             */
/*   Updated: 2023/11/04 03:47:25 by seng             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len;
	int		i;

	len = ft_strlen(s1) + ft_strlen(s2) +1;
	s = (char *)malloc(sizeof(char) * len);
	if (!s)
		return (NULL);
	len = 0;
	while (s1[len])
	{
		s[len] = s1[len];
		len++ ;
	}
	i = 0;
	while (s2[i])
	{
		s[len + i] = s2[i];
		i++ ;
	}
	s[len + i] = '\0';
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
