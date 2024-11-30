/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:52:07 by igurses           #+#    #+#             */
/*   Updated: 2024/11/30 17:36:29 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_read_line(int fd, char *put_line)
{
    char *buffer;
    int reader;

    buffer = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
    if (!buffer)
        return(NULL);
    reader = 1;
    while (!ft_strchr(buffer, '\n') && reader != 0)
    {
        reader = read(fd, buffer, BUFFER_SIZE);
        if (reader == -1)
        {
            free(buffer);
            free(put_line);
            return(NULL);
        }
        buffer[reader] = '\0';
        put_line = ft_strjoin(put_line, buffer);
    }
    free(buffer);
    return(put_line);
}

char *ft_put_line_main(char *put_line)
{
    char *str;
    int i;
    
    if (!put_line)
        return(NULL);
    i = 0;
    while (put_line[i] != '\n' && put_line[i] != '\0')
        i++;
    str = (char *)malloc(sizeof(char) * i + 2);
    i = 0;
    while (put_line[i] != '\n' && put_line[i] != '\0')
    {
        str[i] = put_line[i];
        i++;
    }
    if(put_line[i] == '\n')
    {
        str[i] = put_line[i];
        i++;
    }
    str[i]= '\0';
    return(str);
}
char *ft_put_remain(char *put_line)
{
    char *str;
    int i;
    int j;

    if (!put_line)
    {
        free(put_line);
        return (NULL);
    }
    i = 0;
    while (put_line[i] != '\0' && put_line[i] != '\n')
        i++;
    str = (char *)malloc(sizeof(char) * (ft_strlen(put_line) - i));
    if (!str)
        return (NULL);
    i++;
    j = 0;
    while (put_line[i + j])
    {
        str[j] = put_line[i + j];
        j++;
    }
    str[j] = '\0';
    free(put_line);
    return (str);
}

char *get_next_line(int fd)
{
    char *main_line;
    static char *put_line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    put_line = ft_read_line(fd, put_line);
    if(!put_line)
    {
        return(NULL);
    }
    main_line = ft_put_line_main(put_line);
    put_line = ft_put_remain(put_line);    
    return(main_line);
}
