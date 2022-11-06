/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:25:34 by yoonsele          #+#    #+#             */
/*   Updated: 2022/09/10 11:28:00 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_stplen(char **strs, int size)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = -1;
		while (strs[i][++j])
			len++;
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
}

void	fill_dest(char **strs, char *dest, int size, char *sep)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i + 1 < size)
			ft_strcat(dest, sep);
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		len_sep;
	int		len_total;

	len_sep = ft_strlen(sep);
	len_total = ft_stplen(strs, size);
	if (size == 0)
		len_total = 0;
	else
		len_total += (size - 1) * len_sep;
	dest = (char *)malloc((len_total + 1) * sizeof(char));
	if (!dest)
		return (0);
	*dest = 0;
	fill_dest(strs, dest, size, sep);
	dest[len_total] = 0;
	return (dest);
}
