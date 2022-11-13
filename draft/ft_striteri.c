/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:38:31 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/13 14:00:55 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	len_src;
	int	i;

	len_src = ft_strlen((char *)s);
	i = 0;
	while (i < len_src)
	{
		(*f)((unsigned int)i, s);
		i++;
	}
	return ;
}
// why theey pass 's'. description says 'to pass each character'
