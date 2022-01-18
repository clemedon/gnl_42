/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:14:07 by cvidon            #+#    #+#             */
/*   Updated: 2021/12/07 12:14:09 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int		fd;
	char	*ret;

	fd = open("file", O_RDONLY);
	ret = get_next_line(fd);
	printf("%s", ret);
	free (ret);
	ret = get_next_line(fd);
	printf("%s", ret);
	free (ret);
	ret = get_next_line(fd);
	printf("%s", ret);
	free (ret);
	ret = get_next_line(fd);
	printf("%s", ret);
	return (0);
}
