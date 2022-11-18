/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 18:46:18 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/15 18:58:27 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		len_s1;
	int		len_s2;
	int		total;

	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	total = len_s1 + len_s2;
	dst = (char *)malloc(sizeof(char) * (total + 1));
	if (!dst)
		return (0);
	while (len_s1--)
		*dst++ = *s1++;
	while (len_s2--)
		*dst++ = *s2++;
	*dst = 0;
	dst -= total;
	return (dst);
}