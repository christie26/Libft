#include "libft.h"

int main(void)
{
	void *dst = "hahhahahaa";
	void *src = "kaka";
	int	c = 97; 
	size_t n = 3;
	void *res1 = memccpy(dst, src, c, n);
	printf("%s\n",(char *)res1);	
	void *res2 = ft_memccpy(dst, src, c, n);
	printf("%s\n",(char*)res2);	
}
