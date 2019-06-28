/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 09:36:15 by wasahmed          #+#    #+#             */
/*   Updated: 2019/06/14 08:55:24 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *str, size_t n)
{
	size_t		i;
	char		*dest;
	const char	*src;

	if (str == dst)
		return ((char *)str);
	dest = (char *)dst;
	src = (char *)str;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dst);
}
