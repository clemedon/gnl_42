/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:14:07 by cvidon            #+#    #+#             */
/*   Updated: 2022/01/28 13:40:17 by cvidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*
 ** =========[ Defines ]===========
 */

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2048
# endif

/*
 ** =========[ Includes ]==========
 */

/*
 ** Prod
 */

# include <unistd.h>
# include <stdlib.h>

/*
 ** Dev
 */

# include <printf.h>
# include <fcntl.h>

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
size_t	ft_strlen(char *str);
char	*ft_strdup(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, size_t start, size_t len);

#endif
