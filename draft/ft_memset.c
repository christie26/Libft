/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:10:49 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/11 14:26:43 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*dst;

	i = 0;
	dst = (char *)b;
	while (i++ < len)
		dst[i] = (unsigned char)c;
	dst[i] = 0;
	return ((void *)dst);
}
