/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:48:04 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/11 15:59:55 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	nb;

	nb = n;
	while (nb--)
	{
		if (*(char *)s == c)
			break ;
		s++;
	}
	if (nb == -1)
		return (0);
	else
		return ((void *)s);
}
