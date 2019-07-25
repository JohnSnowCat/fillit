#include "fillit.h"

int     ft_check_first( char *tetr, int ret)
{
  int i;
  int dot;
  int hash;

  i = 0;
  dot = 0;
  hash = 0;
  if (ret != 21 && ret != 20)
    return(0);
  while (tetr[i] != '\0')
  {
    if (tetr[i] == '.')
      dot++;
    if (tetr[i] == '#')
      hash++;
    if ((i + 1) % 5 == 0)
      if(tetr[i] != '\n')
        return (0);
    i++;
  }
  if (dot != 12 || hash != 4) // "||" "&&"
    return (0);
  if (tetr[20] != '\n' && tetr[20] != '\0')
    return(0);
  return (1);
}

int ft_second_check(char *tetr, int ret)
{
  int i;
  int pos;
  
  i = 0;
  pos = 0;
  while (i < ret)
  {
    if (tetr[i] == '#')
    {
      if (tetr[i + 1] == '#'&& (i + 1) < 19)
        pos++;
      if (tetr[i - 1] == '#' && (i - 1) >= 0)
        pos++;
      if (tetr[i + 5] == '#' && (i + 5) < 19)
        pos++;
      if (tetr[i - 5] == '#' && (i - 5) >= 0)
        pos++; 
    }
    i++;
  }
  if (pos < 6)
    return(0);
  return (1);
  }

t_list  *ft_read(int fd)
{
  int     ret;
  int     i;
  int     check;
  int     check2;
  char    buf[BUF_SIZE + 1];
  t_list  *p;
  t_list *sqr = NULL;

  i = 0;
  check = 0;
  check2 = 0;
  //p = (t_list*)malloc(sizeof(t_list));
  //p->content = (char*)malloc(sizeof(char) * (BUF_SIZE + 1));
  while ((ret = read(fd, buf, BUF_SIZE)) > 0)
  {
    buf[ret] = '\0';
    printf("ret is %d\n", ret);
    check = ft_check_first(buf, ret);
    printf("check is %d\n", check);
    check2 = ft_second_check(buf, ret);
    printf("check is %d\n", check2);
    if (check == 0 ||ft_second_check(buf,ret)check2 == 0)
      return(NULL);
    ft_createlist(&sqr, buf, &p);
    //ft_memcpy(p->content, buf, BUF_SIZE);
    //printf("%s", p->content);
  }
  //free(p->content);
  //free(p);
}

int main(int ac, char **av)
{
  int fd;
  t_list *sqr;

  if (ac < 2)
    printf("input_file_name\n");
  fd = open(av[1], O_RDONLY);
  printf("%d\n", fd);
  sqr = ft_read(fd);
  return (0);
}