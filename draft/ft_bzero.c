#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t 	i;
	char	*str;

	str = (char *)s;
	while (n--)
		*str++ = 0;
}
