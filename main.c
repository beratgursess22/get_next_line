#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd = open("test.txt", O_RDWR, 0777);
    char *line;

    line = get_next_line(fd);
    char *str = NULL;
    char *str2 = 0;
    char *str3 = "selam";


    printf("%s\n", str);

    exit(1);

    str = malloc(5);
    str[4] = '\0';
    str[3] = 'd';
    str[2] = 'c';
    str[1] = 'b';
    str[0] = 'a';

    printf("%s\n", str);


    str[4] = '\0';
    str[3] = '\0';
    str[2] = '\0';
    str[1] = '\0';
    str[0] = '\0';

    printf("%s\n", str);



    // line = get_next_line(fd);
    // printf("%s", line);
}