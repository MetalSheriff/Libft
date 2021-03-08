/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 10:54:33 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/14 14:44:57 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi_checker(int result, int count, int sign)
{
	if (count >= 19)
	{
		if (sign == -1)
			result = 0;
		else
			result = -1;
	}
	return (result);
}

int		ft_atoi(const char *str)
{
	int result;
	int sign;
	int i;
	int count;

	result = 0;
	sign = 1;
	i = 0;
	count = 0;
	while ((str[i] == ' ') || (str[i] == '\r') || (str[i] == '\t') ||
		(str[i] == '\n') || (str[i] == '\v') || (str[i] == '\r') ||
		(str[i] == '\f'))
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] && ft_isdigit(str[i]))
	{
		result = 10 * result + str[i++] - '0';
		count++;
	}
	return (sign * ft_atoi_checker(result, count, sign));
}
