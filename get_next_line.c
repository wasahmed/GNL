/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 14:06:41 by wasahmed          #+#    #+#             */
/*   Updated: 2019/07/03 13:12:23 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*seperator(char **s, char **line, int fd)
{
	char	*hold;
	int		i;

	i = 0;
	while (s[fd][i] != '\n' && s[fd][i] != '\0')
		i++;
	if (s[fd][i] == '\n')
	{
		*line = ft_strsub(s[fd], 0, i);
		hold = ft_strdup(s[fd] + i + 1);
		free(s[fd]);
		s[fd] = hold;
		if (s[fd][0] == '\0')
			ft_strdel(&s[fd]);
	}
	else if (s[fd][i] == '\0')
	{
		*line = ft_strdup(s[fd]);
		ft_strdel(&s[fd]);
	}
	return (*line);
}

int				get_next_line(const int fd, char **line)
{
	static char	*s[50];
	char		buf[BUFF_SIZE + 1];
	char		*hold;
	int			bytesread;

	if (fd < 0 || line == NULL)
		return (-1);
	while ((bytesread = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[bytesread] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strnew(0);
		hold = ft_strjoin(s[fd], buf);
		free(s[fd]);
		s[fd] = hold;
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	if (bytesread < 0)
		return (-1);
	else if (bytesread == 0 && (s[fd] == NULL || s[fd][0] == '\0'))
		return (0);
	*line = seperator(s, line, fd);
	return (1);
}
