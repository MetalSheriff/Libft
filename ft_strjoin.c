/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 15:18:58 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/08 15:51:22 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i1;
	size_t	i2;
	char	*temp;

	i1 = 0;
	i2 = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(temp = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	while (s1[i1] != '\0')
	{
		temp[i1] = s1[i1];
		i1++;
	}
	while (s2[i2] != '\0')
	{
		temp[i1 + i2] = s2[i2];
		i2++;
	}
	temp[i1 + i2] = '\0';
	return (temp);
}
