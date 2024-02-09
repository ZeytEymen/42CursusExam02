#include <unistd.h>
void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
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

int main(int ac, char **arg)
{
    if (ac != 2)
    {
        ft_putstr("\n");
        return 0;
    }
    int i = -1;
    while (arg[1][++i])
    {
        if (ft_is_upper(arg[1][i]))
        {
            arg[1][i] = (26 - (arg[1][i] - 'A') + 'A' - 1);
        }
        else if (ft_is_lower(arg[1][i]))
        {
            arg[1][i] = (26 - (arg[1][i] - 'a') + 'a' - 1);
        }   
    }  
    ft_putstr(arg[1]);
    write(1,"\n",1);
}