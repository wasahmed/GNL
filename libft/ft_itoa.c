/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:24:30 by wasahmed          #+#    #+#             */
/*   Updated: 2019/06/12 15:24:49 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_digits(int n)
{
	size_t	count;

	count = 1;
	while (n /= 10)
		count++;
	return (count);
}

char			*ft_itoa(int n)
{
	size_t			len;
	char			*str;
	unsigned int	nbr;

	len = count_digits(n);
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = nbr % 10 + '0';
	while (nbr /= 10)
		str[--len] = nbr % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
