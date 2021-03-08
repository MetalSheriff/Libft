/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 13:41:18 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/14 18:25:12 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	position;
	char	*str;

	position = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (position < len && s[start] != '\0')
	{
		str[position] = s[start];
		position++;
		start++;
	}
	str[position] = '\0';
	return (str);
}
