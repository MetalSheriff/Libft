/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 16:29:25 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/12 17:59:36 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_itoalen(int n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	length;
	size_t	i;
	char	*str;

	length = ft_itoalen(n);
	if (!(str = (char *)malloc(length + 1)))
		return (NULL);
	str[length] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (length-- > i)
	{
		str[length] = '0' + n % 10 * (n < 0 ? -1 : 1);
		n /= 10;
	}
	return (str);
}
