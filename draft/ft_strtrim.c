/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:01:14 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/11 19:02:49 by yoonsele         ###   ########.fr       */
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
	char	*tmp;
	char	*dst;

	tmp = (char *)s1;
	cnt = 0;
	while (*tmp++)
	{
		if (check_set(tmp, set))
			cnt++;
	}
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) - ft_strlen(set) * cnt + 1));
	if (!dst)
		return (0);
	while (*s1++)
	{
		if (check_set(s1, set))
			s1 += ft_strlen(set);
		else
			*dst++ = *s1;
	}
	*dst = 0;
	return (dst);
}
