/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 12:14:03 by plaophit          #+#    #+#             */
/*   Updated: 2023/10/15 12:14:04 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	sizecheck;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s) - start)
		sizecheck = ft_strlen(s) - start + 1;
	else
		sizecheck = len + 1;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * sizecheck);
	if (!str || ft_strlen(s) < start)
		return (NULL);
	ft_strlcpy(str, &s[start], sizecheck);
	return (str);
}

// int	main(void)
// {
// 	char 	*str = "01234";
// 	size_t 	size = 10;
// 	char 	*ret = ft_substr(str, 10, size);ç

// 	if (!strncmp(ret, "", 1))
// 	{
// 		free(ret);
// 		printf("TEST_SUCCESS");
// 	}
// 	free(ret);
// 	printf("TEST_FAILED");
// }
