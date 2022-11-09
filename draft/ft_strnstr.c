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

int	check_all(const char *haystack, const char *needle, int i, size_t len)
{
	int	j;

	j = 0;
	while (needle[j] && (haystack[i + j] == needle[j]) && i + j < len)
		j++;
	if (needle[j] == 0) 
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_hay;
	int		flag;

	i = 0;
	flag = 0;
	if (needle[i] == 0)
		return ((char *)haystack);
	len_hay = ft_strlen((char *)haystack);
	while (i < len_hay && i < len)
	{
		if (check_all(haystack, needle, i, len))
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 1)
		return ((char*)haystack + i);
	else
		return (0);
}
