/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:21:36 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/13 14:38:33 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len_src;
	int		i;
	char	*res;

	len_src = ft_strlen((char *)s);
	res = (char *)malloc(sizeof(char) * len_src);
	if (!res)
		return (0);
	i = 0;
	while (i < len_src)
	{
		res[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	return (res);
}
