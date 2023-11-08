/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plaophit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:08:19 by plaophit          #+#    #+#             */
/*   Updated: 2023/11/08 23:00:14 by plaophit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	str = 0;
	i = 0;
	j = ft_strlen(s1);
	if (j == 0)
		return (ft_strdup(""));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	str = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], j - i + 1);
	return (str);
}
// int main(void)
// {
// 	char *str = "12234;lskdnglsdglskdfdog'a;ssfjf124    d1111";
// 	char *set = "1";
// 	char *res;
// 	res = ft_strtrim(str,set);
// 	printf("%s", res);
// 	return (0);
// }
