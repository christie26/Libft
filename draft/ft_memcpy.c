/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:38:27 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/18 13:12:50 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp;

	if (!dst && !src)
		return (0);
	tmp = (char *)dst;
	while (n--)
		*tmp++ = *(char *)src++;
	return (dst);
}
