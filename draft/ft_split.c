/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:57:22 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/11 19:00:07 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_filltab(char **tab, char *s, char c, int idx_tab)
{
	int	j;
	int	cnt;

	if (*s == c)
		s++;
	i = 0;
	cnt = 0;
	while (s[i++] != c)
		cnt++;
	tab[idx_tab] = (char *)malloc(sizeof(char) * (cnt + 1));
	if (!tab[idx_tab])
		return (0);
	i = 0;
	while (i++ < cnt)
		tab[idx_tab][i] = *s++;
	tab[idx_tab][i] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	*tmp;
	int		cnt;

	cnt = 1;
	tmp = (char *)s;
	while (*tmp++)
	{
		if (*tmp == c)
			cnt++;
	}
	tab = (char **)malloc(sizeof(char *) * cnt);
	if (!tab)
		return (0);
	while (cnt--)
		ft_filltab(tab, s, c, cnt);
	tab = 0;
	return (tab);
}
