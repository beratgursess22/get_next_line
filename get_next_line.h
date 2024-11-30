/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:54:08 by igurses           #+#    #+#             */
/*   Updated: 2024/11/30 17:11:44 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 10000
#endif

#include <unistd.h>
#include <stdlib.h>

char *ft_read_line(int fd, char *put_line);
char *ft_put_line_main(char *put_line);
char *ft_put_remain(char *put_line);
char *get_next_line(int fd);
size_t ft_strlen(char *str);
char *ft_strchr(const char *str, int c);
char *ft_strjoin(char *s1, char *s2);

#endif