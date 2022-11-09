#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ori;

	ori = dst;
	while (len--)
		*(char *)dst++ = *(char *)src++;
	return (ori);
}
