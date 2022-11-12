/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:43:39 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/11 19:02:20 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	char	*src;

	src = (char *)s;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (0);
	src += start;
	while (len-- && *src)
		*dst++ = *src++;
	*dst = 0;
	return (dst);
}
