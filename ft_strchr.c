/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <plaophit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 20:15:26 by plaophit          #+#    #+#             */
/*   Updated: 2023/11/06 19:41:07 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		cc;
	char		*ss;

	i = 0;
	cc = (char)c;
	ss = (char *)s;
	while (ss[i] != '\0')
	{
		if (ss[i] == cc)
			return (&ss[i]);
		i++;
	}
	if (ss[i] == cc)
		return (&ss[i]);
	return (NULL);
}
