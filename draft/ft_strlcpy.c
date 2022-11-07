/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:22:45 by yoonsele          #+#    #+#             */
/*   Updated: 2022/08/30 15:23:45 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	j;
	char	*s;

	s = (char*)src;
	len_src = 0;
	j = 0;
	len_src = ft_strlen(s);	
	while (j + 1 < dstsize && src[j] != 0)
	{
		dst[j] = src[j];
		j++;
	}
	if (dstsize > 0)
		dst[j] = 0;
	return (len_src);
}
