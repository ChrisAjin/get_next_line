/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cassassa <cassassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 19:21:05 by cassassa          #+#    #+#             */
/*   Updated: 2023/11/23 19:51:37 by cassassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <strings.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 4000
# endif

char	*read_files(int rd, char *rest, int fd, char *buffer);
char	*get_next_line(char *rest);
char	*get_new_rest(char *rest);
char	*get_next_line(int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char const *s2);
#endif
