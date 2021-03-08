/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:16:05 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/07 18:07:38 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int position;
	unsigned int i;

	position = 0;
	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[position] != '\0' && position < len)
	{
		i = 0;
		while (needle[i] != '\0')
		{
			if (haystack[position + i] != needle[i] || position + i > len)
				break ;
			i++;
		}
		if (needle[i] == '\0')
			return ((char *)(haystack + position));
		position++;
	}
	return (0);
}
