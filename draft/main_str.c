#include "libft.h"

int main(void)
{
	/*
	// strlcpy
	//
	char a[10] = "happy";
	char b[10] = "happy";
	unsigned int size = 0;
	char c[10];
	char d[10];	

	unsigned int i = ft_strlcpy(c, a, size);
	unsigned int j = strlcpy(d, b, size);
	if (!strcmp(c,d) | (i != j))
		printf("Error in ft_strlcpy\n");
*/
/*
	// strchr & strrchr
	char	*s = "happy";
	char	*res1;
	char	*res2;
	int	c = 111; //a:97 p:112

	res1 = strrchr(s, c);
	res2 = ft_strrchr(s, c);
	printf("%s\n%s\n",res1, res2);
*/
	//strncmp
/*
	char *a = "happy";
	char *b = "happi";
	int	n = 6;
	int result1;
	int result2;

	result1 = strncmp(a,b,n);
	result2 = ft_strncmp(a,b,n);
	printf("strncmp:%d\n",result1);
	printf("ft_strncmp:%d\n",result2);
*/
//strnstr	
	char *result1;
	char *result2;
	const char	*haystack = "happy etienne";
	const char	*needle = "etienne";
	size_t	len = 5;
	result1 = strnstr(haystack,needle,len);
	result2 = ft_strnstr(haystack,needle,len);
	printf("strnstr:%s\n",result1);
	printf("ft_strnstr:%s\n",result2);
}
