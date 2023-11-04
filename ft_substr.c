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
	char	*s;

	s = (char *)malloc(sizeof(char) * len + 1);
	if (!*s)
		return ('\0');
	if (ft_strlen(s) < (size_t) start)
		return (0);
}

int	main(void)
{
	char	*str1;
	unsigned int start;
	int		len;

	start = 7;
	len = 10;
	str1 = "lorem ipsum";

	printf("%s", ft_substr(str1, start, len));
}
