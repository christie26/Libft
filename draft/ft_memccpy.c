#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- && *(char *)src != (unsigned char)c)
		*(char *)dst++ = *(char *)src++;		
	if (n == 0)
		return (0);
	else
		return (dst++);
}
