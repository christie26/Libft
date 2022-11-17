#include "libft.h"

int main(void)
{

	// strlcpy & strlcat
	char *a;
	char b[100] = "etienne\0";
	char *c;
	char d[100] = "etienne\0";
	size_t size = 0;

	size_t i = ft_strlcat(a, b, size);
	size_t j = strlcat(c, d, size);
	printf("%zu, %s(ft_strlcat)\n", i, a);
	printf("%zu, %s(strlcat)\n", j, c);
	
/*
	// strchr & strrchr
	char	*s = "abciiabc";
	int	c = 98; //a:97 p:112

	printf("strrchr:%s\n", strrchr(s, c));
	printf("ft_strrchr:%s\n", ft_strrchr(s, c));
	printf("strchr:%s\n", strchr(s, c));
	printf("ft_strchr:%s\n", ft_strchr(s, c));
*/
/*
	//strncmp

	char *a = "happy";
	char *b = "happi";
	int	n = 6;

	printf("strncmp:%d\n",strncmp(a,b,n));
	printf("ft_strncmp:%d\n",strncmp(a,b,n));
*/
/*
//strnstr	
	char *result1;
	char *result2;
	const char	*haystack = "ab!ab!!ab";
	const char	*needle = "!!";
	size_t	len = 7;
	result1 = strnstr(haystack,needle,len);
	result2 = ft_strnstr(haystack,needle,len);
	printf("strnstr:%s\n",result1);
	printf("ft_strnstr:%s\n",result2);
*/
/*
//strtrim
	char	*src = "    ";
	char	*set = "\n \t";
	printf("\nft_strtrim\nsrc=%s\nset=%s\nresult=%s",src, set, ft_strtrim(src,set));
*/
}
