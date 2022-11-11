/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:00:01 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/11 16:22:02 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (--n)
	{
		if (*(char *)s1++ != *(char *)s2++)
			break ;
	}
	if (n == 0)
		return (0);
	else if (*(char *)(s1 - 1) > *(char *)(s2 - 1))
		return (1);
	else
		return (-1);
}
