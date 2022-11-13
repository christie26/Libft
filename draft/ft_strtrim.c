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

int	check_set(char *s1, char *set)
{
	while (*set++ && *s1++)
	{
		if (*set != *s1) //check about postfix
			break ;
	}
	if (*set)
		return (0);
	else
		return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		cnt;
	int		len;
	char	*tmp;
	char	*dst;

	tmp = (char *)s1;
	cnt = 0;
	while (*tmp++)
	{
		if (check_set(tmp, (char *)set))
			cnt++;
	}
	len = ft_strlen((char *)s1) - ft_strlen((char *)set) * cnt + 1;
	dst = (char *)malloc(sizeof(char) * len);
	if (!dst)
		return (0);
	while (*s1++)
	{
		if (check_set((char *)s1, (char *)set))
			s1 += ft_strlen((char *)set);
		else
			*dst++ = *s1;
	}
	*dst = 0;
	return (dst);
}
