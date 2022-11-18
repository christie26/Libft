/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:10:49 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/18 14:37:40 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*dst;

	dst = (char *)b;
	i = 0;
	while (i < len)
		dst[i++] = (unsigned char)c;
	return ((void *)dst);
}
