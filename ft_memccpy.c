/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:27:16 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/15 18:56:02 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- && *(char *)src)
	{
		*(char *)dst++ = *(char *)src++;
		if (*(char *)(src - 1) == (unsigned char)c)
			break ;
	}
	if (n != 0)
		return (dst++);
	else
		return (0);
}
