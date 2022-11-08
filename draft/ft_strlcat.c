/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:57:03 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/08 19:52:33 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len_src);
	if (size <= len_dst)
		return (size + len_src);
	while (src[i] && len_dst + 1 + i < size)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
