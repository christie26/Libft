#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		len_s1;
	int		len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	dst = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1))
	if (!dst)
        return (0);
    while (len_s1--)
        *dst++ = *s1++;
    while (len_s2--)
        *dst++ = *s2++;
    *dst = 0;
    return (dst);
}