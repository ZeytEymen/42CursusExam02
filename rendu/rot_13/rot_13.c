#include <unistd.h>

void ft_putstr(char *str)
{
    while (*str)
        write(1,str++,1);  
}
int ft_is_upper(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    return 0;
}
int ft_is_lower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return 1;
    return 0;
}
int main(int argc, char **argv)
{
    if (argc != 2)
    {
        ft_putstr("\n");
        return (0);
    }
    int i = -1;
    while (argv[1][++i])
    {
        if (ft_is_upper(argv[1][i]))
        {
           argv[1][i] = (int)(argv[1][i] - 'A' + 13) % 26 + 'A';
        }
        else if (ft_is_lower(argv[1][i]))
        {
            argv[1][i] = (int)(argv[1][i] - 'a' + 13) % 26 + 'a';
        }
    }
    ft_putstr(argv[1]);
    write(1,"\n",1);
}