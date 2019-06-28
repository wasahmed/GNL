/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:13:27 by wasahmed          #+#    #+#             */
/*   Updated: 2019/05/29 10:19:56 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*s1;
	char	c1;
	int		i;

	i = 0;
	c1 = (char)c;
	s1 = (char *)str;
	while (n != '\0')
	{
		if (s1[i] == c1)
			return (s1 + i);
		n--;
		i++;
	}
	return (NULL);
}
