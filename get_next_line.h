/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapadron <mapadron@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 20:20:52 by mapadron          #+#    #+#             */
/*   Updated: 2025/10/03 20:20:54 by mapadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	*ft_calloc(int nmemb, int size);
int		ft_charpos(char *str, char c);
int		ft_stradd(char **dest, char *src, int len_src);
char	*get_next_line(int fd);
#endif
