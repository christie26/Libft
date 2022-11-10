#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *dst;

    dst = (char *)malloc(sizeof(char)*(len + 1));
    if (!dst)
        return (0);
    while (len--)
        *dst++ = s[start++]
    *dst = 0;
    return (dst);
}
