/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:57:22 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/13 20:06:16 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_filltab(char **tab, char *s, char c, int idx_tab)
{
	int	i;
	int	cnt;

	while (*s == c)
		s++;
	i = 0;
	cnt = 0;
	while (s[i++] != c)
		cnt++;
	tab[idx_tab] = (char *)malloc(sizeof(char) * (cnt + 1));
	if (!tab[idx_tab])
		return (0);
	i = 0;
	while (i < cnt)
	{
		tab[idx_tab][i] = *s++;
		i++;
	}
	tab[idx_tab][i] = 0;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*src;
	int		cnt;
	int		i;

	cnt = 0;
	src = (char *)s;
	if (*src++ != c)
		cnt++;
	while (*src)
	{
		if (*src != c && *(src - 1) == c)
			cnt++;
		src++;
	}
	tab = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!tab)
		return (0);
	i = 0;
	src = (char *)s;
	while (i < cnt)
		src = ft_filltab(tab, src, c, i++);
	tab[i] = 0;
	return (tab);
}
