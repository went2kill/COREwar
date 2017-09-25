#include "asm_parsing.h"

//void check_name(char *s, header_t *head)
//{
//
//}

void error(int code)
{
    if (code == 0)
        ft_printf("");
}

void get_name(header_t *head, int fd)
{
    char *s;

    get_next_line(fd, &s);
    printf("%s\n", s);
    if (!ft_strnequ(s, ".name", 5))
        ft_printf("err");
//    check_name(s, head);
}

int main()
{
    int fd;
    header_t head;

    fd = open("/nfs/2016/y/yrobotko/CLionProjects/untitled1/ex.s", O_RDONLY);
    printf("%d\n", fd);
    get_name(&head, fd);
    close(fd);
    return 0;
}