/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:53:20 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/15 18:58:04 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char	key;
	int		i;
	int		len_src;

	len_src = ft_strlen((char *)s);
	key = c;
	i = 0;
	while (i < len_src + 1)
	{
		if (s[i] == key)
			return (s + i);
		i++;
	}
	return (0);
}
