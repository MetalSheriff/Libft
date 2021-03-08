/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:06:51 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/14 18:23:54 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_malloc_checker(char **tab)
{
	unsigned int i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

void			ft_get_str(char **str, unsigned int *str_length, char c)
{
	unsigned int i;

	i = 0;
	*str += *str_length;
	*str_length = 0;
	while (**str && **str == c)
	{
		(*str)++;
	}
	while ((*str)[i])
	{
		if ((*str)[i] == c)
			return ;
		(*str_length)++;
		i++;
	}
}

unsigned int	ft_get_str_number(char const *s, char c)
{
	unsigned int i;
	unsigned int str_number;

	i = 0;
	str_number = 0;
	if (!s[i])
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			str_number++;
			while (s[i] && s[i] == c)
				i++;
			continue;
		}
		i++;
	}
	if (s[i - 1] != c)
		str_number++;
	return (str_number);
}

char			**ft_split(char const *s, char c)
{
	char			**tab;
	char			*str;
	unsigned int	str_length;
	unsigned int	str_number;
	unsigned int	i;

	i = 0;
	str = (char *)s;
	str_length = 0;
	if (!s)
		return (NULL);
	str_number = ft_get_str_number(s, c);
	if (!(tab = malloc(sizeof(char *) * (str_number + 1))))
		return (NULL);
	while (i < str_number)
	{
		ft_get_str(&str, &str_length, c);
		if (!(tab[i] = malloc(sizeof(char) * str_length + 1)))
			return (ft_malloc_checker(tab));
		ft_strlcpy(tab[i], str, str_length + 1);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
