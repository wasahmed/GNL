/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasahmed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 14:09:39 by wasahmed          #+#    #+#             */
/*   Updated: 2019/06/27 17:24:01 by wasahmed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*line;

	(void)argc;
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		printf("%s\n", line);
		if (line)
			ft_strdel(&line);
	}
	if (line)
		free(line);
	close(fd);
	sleep(60);
	return (0);
}
