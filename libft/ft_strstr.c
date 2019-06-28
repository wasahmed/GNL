/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:23:27 by wasahmed          #+#    #+#             */
/*   Updated: 2019/06/07 10:13:27 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		k;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	if (haystack[i] == ' ')
		i++;
	while (haystack[i] != '\0')
	{
		k = 0;
		while (needle[k] != '\0' && needle[k] == haystack[i + k])
			k++;
		if (needle[k] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
