/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <plaophit@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 04:38:30 by plaophit          #+#    #+#             */
/*   Updated: 2023/10/14 14:07:20 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s)-1;
	while (s[i] && s[i] != (char) c)
		i--;
	if (s[i] == (char) c)
		return ((char *)&s[i]);
	return (0);
}
