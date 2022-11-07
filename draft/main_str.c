#include "libft.h"

int main(void)
{
	char a[10] = "happy";
	char b[10] = "happy";
	unsigned int size = 0;
	char c[10];
	char d[10];	

	unsigned int i = ft_strlcpy(c, a, size);
	unsigned int j = strlcpy(d, b, size);
	if (c != d)
		printf("Error in ft_strlcpy\n");
}
