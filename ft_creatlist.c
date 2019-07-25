#include "fillit.h"

t_tetri *ft_tetcode(char *buf, char c)
{
    t_tetri *block;
    int code[6];
    char *blockcode;
    if ((block = (t_tetri *)malloc(sizeof(t_tetri))) == NULL)
        return (NULL);
    if ((blockcode = ft_memalloc(12)) == NULL)
        return (NULL);
}

ft_creatlist(t_list **sqr, char *buf, t_list **p)
{
    t_tetri *block;
    static char c = 'A';
    block = ft_tetcode(buf, c);
}