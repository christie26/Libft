#include "libft.h"

int	check_set(char *s1, char *set, int i)
{
    while (*set++)
    {
        if (*set != s1[i++]) //check about postfix
            break;
    }
    if (*set)
        return (0);
    else    
	    return (1);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int     num;
    char    *tmp;

    tmp = (char *)s1;
    while (*tmp++)
    {
        if (check_set(tmp, set, i++))
            
    }

}