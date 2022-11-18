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
	char	*src;
	int		i;
	int		len_src;

	src = (char *) s;
	len_src = ft_strlen(src);
	key = c;
	i = 0;
	while (i < len_src + 1)
	{
		if (src[i] == key)
			return (src + i);
		i++;
	}
	return (0);
}
