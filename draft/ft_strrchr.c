/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:58:08 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/18 13:02:01 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	key;
	int		i;
	int		tmp;
	int		len_src;

	len_src = ft_strlen((char *)s);
	key = c;
	i = 0;
	tmp = -1;
	while (i < len_src + 1)
	{
		if (src[i] == key)
			tmp = i;
		i++;
	}
	if (tmp != -1)
		return (src + tmp);
	return (0);
}
