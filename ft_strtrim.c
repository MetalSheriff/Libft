/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 16:17:43 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/14 18:24:04 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	check_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	char			*str;
	unsigned int	str_size;
	char			*str_start;
	char			*str_end;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && check_set(s1[i], set))
		i++;
	str_start = (char *)&s1[i];
	if ((i = ft_strlen(s1) - 1) != -1)
		while (i >= 0 && check_set(s1[i], set))
			i--;
	str_end = (char *)&s1[i];
	if (!*s1 || str_end == str_start)
		str_size = 2;
	else
		str_size = str_end - str_start + 2;
	if (!(str = malloc(sizeof(char) * str_size)))
		return (NULL);
	ft_strlcpy(str, str_start, str_size);
	return (str);
}
