/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypeckled <ypeckled@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 18:03:52 by ypeckled          #+#    #+#             */
/*   Updated: 2020/11/08 12:18:59 by ypeckled         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	unsigned	nbytes;
	void		*address;

	nbytes = nitems * size;
	address = malloc(nbytes);
	if (address)
		ft_memset(address, 0, nbytes);
	return (address);
}
