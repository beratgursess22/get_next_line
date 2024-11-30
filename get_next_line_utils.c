/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 14:27:18 by igurses           #+#    #+#             */
/*   Updated: 2024/11/30 17:05:14 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

size_t ft_strlen(char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

char *ft_strchr(const char *str, int c)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == (char) c)
            return((char *) (str + i));
        i++;
    }
    return(NULL);
}

char *ft_strjoin(char *s1, char *s2)
{
    char *str;
    int i;
    int j;

    if (!s1)
    {
        s1 = (char *)malloc(sizeof(char) * 1);
        s1[0] = '\0';
    }
    if (!s1 || !s2)
        return(NULL);
    str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!str)
        return(NULL);
    i = -1;
    while (s1[++i] != '\0')
        str[i] = s1[i];
    j = -1;
    while (s2[++j] != '\0')
        str[i + j] = s2[j];
    str[i + j]= '\0';
    free(s1);
    return(str);
}
