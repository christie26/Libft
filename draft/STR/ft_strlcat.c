/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:57:03 by yoonsele          #+#    #+#             */
/*   Updated: 2022/08/31 15:17:01 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	strlcat(char *dst, const char *src, size_t size)
{
	char			*s;
	unsigned int	len_dst;
	unsigned int	len_src;
	unsigned int	i;

	s = (char*)src;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(s);
	i = 0;
	if (size < len_dst + 1) // do I have to do +1 ? 
		return (size + len_src);
	if (size > len_dst + 1)
	{
		while (src[i] != '\0' && len_dst + 1 + i < size)
		{
			dst[len_dst + i] = src[i];
			i++;
		}
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}