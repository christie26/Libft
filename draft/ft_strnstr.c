/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:15:31 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/08 22:38:02 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_all(const char *str, const char *needle, int i)
{
	int	j;

	j = 0;
	while ((needle[j] != 0) && (str[i + j] == needle[j]))
	{
		j++;
	}
	if (needle[j] == 0)
		return (0);
	else
		return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	while (check_all(haystack, needle, i) && haystack[i] && i < len)
		i++;
	if (haystack[i] == 0)
		return (0);
	else
		return (&((char *)haystack)[i]);
}
