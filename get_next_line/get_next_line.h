/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:15:45 by sozdamar          #+#    #+#             */
/*   Updated: 2023/12/01 12:15:47 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

int		ft_strlen(char *s);
char	*ft_strchr(char *s, char c);
char	*join(char *s1, char *s2);
char	*ft_read(int fd, char *buffer);
char	*ft_line(char *buffer);
char	*ft_newline(char *buffer);
char	*get_next_line(int fd);
#endif
