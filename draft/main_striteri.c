#include "libft.h"

void	f(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	else if (*c >= 'A' && *c <= 'Z')
		*c = *c + 32;	
}

int main(void)
{
	char	*src = "hapPy";
	printf("src=%s\n", src);
	ft_striteri(src, &f);
	printf("res=%s\n", src);
}
