/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:14:07 by cvidon            #+#    #+#             */
/*   Updated: 2022/02/08 15:59:42 by cvidon           888   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*
 ** =========[ Includes ]==========
 */

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/*
 ** =========[ Defines ]===========
 */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2048
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 1024
# endif

/*
 ** =========[ Prototypes ]========
 **
 ** Commented function means static function.
 */

/*
 ** [ GET_NEXT_LINE.C ]
 */

/* char	*newline(char *temp) */
/* char	*newtemp(char *temp) */
char	*get_next_line(int fd);

/*
 ** [ GET_NEXT_LINE_UTILS.C ]
 */

int		ft_has_nl(char *str);
size_t	ft_strlen_gnl(char *str);
char	*ft_strdup_gnl(char *str);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_substr_gnl(char *s, size_t start, size_t len);

#endif
