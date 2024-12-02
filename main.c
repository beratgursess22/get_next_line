
// #include"get_next_line_bonus.h"

// #include <stdio.h>
// #include <fcntl.h>

// void	ft_putstr_fd(char *s, int fd)
// {
// 	int	i;

// 	i = 0;
// 	while (s[i])
// 	{
//         write(fd, &s[i],1);
//         i++;
// 	}
// }

// int main(int argc ,char *argv[])
// {
//     // int fd = open("test.txt", O_RDONLY);
//     // char **line;
//     // int i =0;
//     // int j = 3;
//     // line = malloc(8 * 3);
//     // int fd1 =open("berat.txt", O_WRONLY | O_RDONLY  ,0777); 
//     // while (j > 0)
//     // {
//     //     while (i < j)
//     //     {
//     //         line[i]=get_next_line(fd);
//     //         i++;
//     //     }
//     //     ft_putstr_fd(line[j-1],fd1);
//     //     j--;
//     // }
    
//     // int fd= open(argv[1],O_RDONLY);
//     // char *line;
//     // line = get_next_line(fd);
//     // printf("%s",line);

// }

// int main()
// {
//     int fd = open("test.txt", O_CREAT | O_RDONLY);
//     int fd1 = open("test1.txt", O_CREAT | O_RDONLY);
//     char *line;
//     char *line1;
//     line=get_next_line(fd);
//     line1 =get_next_line(fd1);

//     printf("%s", line);
//     printf("%s",line1);
// }


    
