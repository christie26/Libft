/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_mem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:49:21 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/11 16:22:07 by yoonsele         ###   ########.fr       */
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
	char	dst[5] = {};
	char	src[5] = {};
//	int	c = 12;
	size_t n = 5; //int:4bytes, char:1byte
//	void *res1 = memccpy(dst, src, c, n);
	memcpy((void *)(size_t)dst, (void *)(size_t)src, n);
	for (int i = 0; i < 5; i++)
	{
		printf("i is%d dst is%d\n", i, dst[i]);
	}
//	printf("%s\n",(char *)res1);	
//	void *res2 = ft_memccpy(dst, src, c, n);
//	void *res2 = ft_memcpy((void *)(size_t)dst, (void *)(size_t)src, n);
//	printf("%s\n",(char *)res2);	
*/
//	char	dst[5];
//	char	src[5] = "happy";
//	char	*res;
//	size_t	len = 5;
//	res = ft_memmove(dst, src, len);
//	printf("res:%s,dst:%s\n",(char *)res, dst);
/*	char a[6] = "";

	printf("memcpy:%s\n",(char *)memcpy(&a[0], &a[1],6));
//	printf("ft_memcpy:%s\n",(char *)ft_memcpy(&a[0], &a[1],6));
//	printf("memmove:%s\n",(char *)memmove(&a[0], &a[1],6));
//	printf("ft_memmove:%s\n",(char *)ft_memmove(&a[0], &a[1],6));
*/
/*	//memchr
	char	*src = "happy etienne";
	int c = 32;
	size_t n = 10;
	printf("memchr:%s\n",memchr(src, c, n));
	printf("ft_memchr:%s\n",ft_memchr(src, c, n));
*/
	printf("memcmp %d\n", memcmp("happy","happy", 5));
	printf("ft_memcmp %d\n", ft_memcmp("happy","happy", 5));
}
