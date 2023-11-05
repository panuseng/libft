/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <plaophit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:14:03 by plaophit          #+#    #+#             */
/*   Updated: 2023/10/15 12:14:04 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str || ft_strlen(s) < start)
		return (NULL);
	if (str)
		ft_strlcpy(str, &s[start], len - start + 1);
	return (str);
}

// int	main(void)
// {
// 	char	*str1;
// 	unsigned int start;
// 	int		len;

// 	start = 1;
// 	str1 = "lorem ipsum";
// 	len = ft_strlen(str1);

// 	printf("%s", ft_substr(str1, start, len));
// }
