/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:43:39 by wasahmed          #+#    #+#             */
/*   Updated: 2019/06/14 08:53:34 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*strb;
	unsigned	int	i;

	i = 0;
	if (len == 0)
		return (b);
	strb = b;
	while (i < len)
	{
		strb[i] = (unsigned char)c;
		i++;
	}
	return (strb);
}
