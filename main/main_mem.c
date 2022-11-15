/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:49:21 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/15 15:39:45 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
	/*
// memset	
	char	base[5];
	int		c = 96;
	size_t	len = 4;
	ft_memset((void *)base, c, len);
	printf("%s\n",(char *)base);
*/
/*
//	memcpy
	char	*dst = 0;
	char	*src = 0;
//	int	c = 12;
	size_t n = 5; //int:4bytes, char:1byte
	void *res1 = memcpy((void *)dst, (void *)src, n);
	printf("%s\n",(char *)res1);	
	void *res2 = ft_memcpy((void *)(size_t)dst, (void *)(size_t)src, n);
	printf("%s\n",(char *)res2);	
*/
	//memmove
//	char	dst[5];
//	char	src[5] = "happy";
//	char	*res;
//	size_t	len = 5;
//	res = ft_memmove(dst, src, len);
//	printf("res:%s,dst:%s\n",(char *)res, dst);
//	char a[8] = "yoonsele";
//	char b[5] = "happy";	
//	printf("memmove:%s\n",(char *)memmove(b, a, 8));
//	printf("ft_memmove:%s\n",(char *)ft_memmove(b, a, 8));
//	printf("memcpy:%s\n",(char *)memcpy(b, a, 6));
//	printf("ft_memcpy:%s\n",(char *)ft_memcpy(&a[0], &a[1],6));
/*
	//memchr
//	char	*src = "happy etienne";
//	int c = 32;
//	size_t n = 10;
//	printf("memchr:%s\n",memchr(src, c, n));
//	printf("ft_memchr:%s\n",ft_memchr(src, c, n));
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    printf("%s", (char *)ft_memchr(tab, -1, 7));
*/
	//memcmp
	char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
 	char *s2 = "\xff\xaa\xde\x02";
 	size_t size = 8;
 	int i1 = memcmp(s1, s2, size);
 	int i2 = ft_memcmp(s1, s2, size);
	printf("%d, %d\n", i1, i2);
//	printf("%d(memcmp)\n", memcmp("t\10", "t\0", 2));
//	printf("%d(ft_memcmp)\n", ft_memcmp("t\10", "t\0", 2));
}
