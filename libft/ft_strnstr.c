/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 09:24:40 by wasahmed          #+#    #+#             */
/*   Updated: 2019/06/07 09:58:32 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	k = 0;
	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		k = 0;
		while (needle[k] != '\0' && needle[k] == haystack[i + k] && i + k < len)
			k++;
		if (needle[k] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
