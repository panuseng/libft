/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <plaophit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 04:38:30 by plaophit          #+#    #+#             */
/*   Updated: 2023/11/07 03:02:04 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
// void main()
// {
// 	char *src = "abbbbbbbb";
// 	char *d1 = strrchr(src, 'a');
// 	char *d2 = ft_strrchr(src, 'a');

// 	if (d1 == d2)
// 		printf("TEST_SUCCESS");
// 	else
// 		printf("TEST_FAILED");

// }
