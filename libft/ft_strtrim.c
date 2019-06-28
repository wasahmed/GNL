/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:12:38 by wasahmed          #+#    #+#             */
/*   Updated: 2019/06/11 13:38:29 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_start(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	return ((char *)&s[i]);
}

static	char	*ft_last(char const *s)
{
	int		i;

	i = ft_strlen(s) - 1;
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i--;
	if (i == -1)
		return (0);
	return ((char *)&s[i]);
}

char			*ft_strtrim(char const *s)
{
	size_t	len;
	char	*firstchar;
	char	*lastchar;
	char	*str;

	if (!s)
		return (NULL);
	firstchar = ft_start(s);
	lastchar = ft_last(s);
	if (firstchar > lastchar)
	{
		str = ft_strnew(0);
		if (!str)
			return (NULL);
		return (str);
	}
	len = lastchar - firstchar + 1;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	str = ft_strncpy(str, firstchar, len);
	return (str);
}
