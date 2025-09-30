#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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
