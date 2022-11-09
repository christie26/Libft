#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *res;
	
	if (!(res = malloc(count * sizeof(size))))
		return (0);
	else
		return (res);	
}
