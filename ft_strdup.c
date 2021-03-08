/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 12:24:09 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/08 13:07:19 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	unsigned int	s;
	char			*dest;
	unsigned int	d;

	s = 0;
	d = 0;
	while (str[s] != '\0')
		s++;
	if (!(dest = (char *)malloc(sizeof(*dest) * s + 1)))
		return (NULL);
	while (d < s)
	{
		dest[d] = str[d];
		d++;
	}
	dest[d] = '\0';
	return (dest);
}
