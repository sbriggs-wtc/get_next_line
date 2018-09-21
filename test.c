/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbriggs <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 06:34:50 by sbriggs           #+#    #+#             */
/*   Updated: 2018/07/11 16:33:25 by sbriggs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(void)
{
	int		fd;
	char	**line;
	char	*str;
	int		gnl_ret;

	line = &str;
	str = "HelloWorld";
	fd = open( "Bible.txt", O_RDONLY);
	gnl_ret = 1;

	while((gnl_ret = get_next_line(fd, line)) > 0)
	{
		printf("%s\n", *line); fflush(stdout);
		printf("gnlret: |%d|\n", gnl_ret); fflush(stdout);
	}
	printf("%s\n", *line); fflush(stdout);
	printf("gnlret: |%d|\n", gnl_ret); fflush(stdout);
	return (0);
}
