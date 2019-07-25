#include "../fillit.h"

/*code_block-------------------------------------------------------*/

int			blockletter(char *blockcode, char *buf, char c, int temp[5])
{
	if (buf[(temp[0] + 5 * temp[1])] == '.')			//buf[1 + 5*0]
	{
		blockcode[temp[2]] = '.';
		temp[2]++;
		return (1);
	}
	else if (buf[(temp[0] + 5 * temp[1])] == '#')
	{
		blockcode[temp[2]] = c;
		temp[2]++;
		return (1);
	}
	return (-1);
}

void		checkright(char *blockcode, char *buf, char c, int temp[5])
{
	temp[3] += blockletter(blockcode, buf, c, temp);
	blockcode[temp[2]++] = 'r';
	temp[0]++;
}

void		checkleft(char *blockcode, char *buf, char c, int temp[5])
{
	temp[3] += blockletter(blockcode, buf, c, temp);
	blockcode[temp[2]++] = 'l';
	temp[0]--;
}

void		checkdown(char *blockcode, char *buf, char c, int temp[5])
{
	printf("temp[3] = %d\n", temp[3]);
	temp[3] += blockletter(blockcode, buf, c, temp);
	printf("temp[3] = %d\n", temp[3]);
	blockcode[temp[2]++] = 'd';
	temp[1]++;
}

char	*codeblock(char *bc, char *buf, char c, int code[6])
{
	int		temp[5];
	int i;

	temp[0] = code[2];
	temp[1] = code[3];
	temp[2] = 0;
	temp[3] = 0;
	temp[4] = code[4] * code[5];
	printf("-/-/-codeblock-/-/-  is:");
	for (i = 0; i < 5; i++)
		printf("%d", temp[i]);
	while (temp[3] < (temp[4] - 1))
	{
		while (temp[0] < code[0] && temp[3] < (temp[4] - 1))
			checkright(bc, buf, c, temp);
		if (temp[1] < code[1] && temp[3] < (temp[4] - 1))
			checkdown(bc, buf, c, temp);
		while (temp[0] > code[2] && temp[3] < (temp[4] - 1))
			checkleft(bc, buf, c, temp);
		if (temp[1] < code[1] && temp[3] < (temp[4] - 1))
			checkdown(bc, buf, c, temp);
	}
	blockletter(bc, buf, c, temp);
	return (bc);
}

/* creatlist ------------------------------------------------------------------------*/
void    ft_size(char *buf, int *code)
{
    int    i;
    code[0] = 0;
    code[1] = 0;
    code[2] = 5;
    code[3] = 5;
    i = 0;
    
    while (buf[i] != '\0')
    {
        if (buf[i] == '#')
        {
            printf("[i]-># is %d\n", i);
            if ((i % 5) > code[0])
            {
                code[0] = (i % 5);
                printf("code[0] is %d\n", code[0]);
            }
            if ((i / 5) > code[1])
            {
                code[1] = (i / 5);
                printf("code[1] is %d\n", code[1]);
            }
            if ((i % 5) < code[2])
            {
                code[2] = (i % 5);
                printf("code[2] is %d\n", code[2]);
            }
            if ((i / 5) < code[3])
            {
                code[3] = (i / 5);
                printf("code[3] is %d\n", code[3]);
            }
        }
        i++;
    }
}


t_tetri    *ft_tetcode(char *buf, char c)
{
    t_tetri *block;
    int    code[6];
    char    *blockcode;
    
    if ((block = (t_tetri *)malloc(sizeof(t_tetri))) == NULL)
        return (NULL);
    if ((blockcode = ft_memalloc(12)) == NULL)
        return(NULL);
    ft_size(buf, code);
    code[4] = 1 + code[0] - code[2];
    code[5] = 1 + code[1] - code[3];
    block->x = code[4];
    block->y = code[5];
    printf("x is: %d\n", block->x);
    printf("y is: %d\n", block->y);
    block->tetris = codeblock(blockcode, buf, c, code);
    return(block);
}

void	ft_createlist(t_list **sqr, char *buf, t_list **p) 
{
	t_tetri *block;
	static char c = 'A';

	if(*sqr == NULL)
{
	block = ft_tetcode(buf, c);
	if (block == NULL)
		return;
/*	*sqr = ft_lstnew(block, sizeof(t_tetri));
	if (*sqr == NULL)
	{
		ft_lstdel(sqr, ft_freetetri);
		return;
	}
	*p = *sqr;
}
	else 
{
	block = ft_tetcode(buf, c);
	if (block == NULL) 
	{
		ft_lstdel(sqr, ft_freetetri);
		return ;
	}
	(*p)->next = ft_lstnew(block, sizeof(t_tetri));
	if((*p)->next ==NULL)
		{
			ft_lstdel(sqr, ft_freetetri);
			return;
		}
	*p = (*p)->next; */
}
	c = c + 1;
}

int main()
{
    char tet[] = {'.', '#', '.', '.', '\n', '.', '#', '.', '.', '\n','.', '#', '.', '.', '\n','.', '#', '.', '.', '\n'};
    //char tet[] = {'#', '#', '.', '.', '\n', '.', '#', '.', '.', '\n','.', '#', '.', '.', '\n','.', '.', '.', '.', '\n', '\n', '#', '#', '.', '.', '\n', '.', '#', '.', '.', '\n','.', '#', '.', '.', '\n','.', '.', '.', '.', '\n'};
    printf("%s\n", tet);
    t_list *sqr;
    t_list *p;

    ft_createlist(&sqr, tet, &p);
    return (0);
}
