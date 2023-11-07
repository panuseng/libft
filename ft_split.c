/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <plaophit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:42:50 by plaophit          #+#    #+#             */
/*   Updated: 2023/11/07 14:29:25 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t wordcount(char const *s, char c)
{
	
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	size;

	if (!s)
		return (c);
	size = 
	res = (char **)malloc(sizeof(char *) * (c + 1));
	if (!res)
		return (NULL);
}
