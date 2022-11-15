/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:01:14 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/13 20:06:31 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_set(char s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *src, char const *set)
{
	int		begin;
	int		i;
	int		len;
	char	*res;

	i = 0;
	while (src[i] && check_set(src[i], set))
		i++;
	begin = i;
	i = ft_strlen((char *)src) - 1;
	while (src[i] && check_set(src[i], set))
		i--;
	if (i == -1)
		len = 0;
	else
		len = i - begin + 1;
	res = (char *)malloc(sizeof(char) * (len + 1));
	src += begin;
	i = -1;
	while (++i < len)
		res[i] = src[i];
	res[i] = 0;
	return (res);
}
