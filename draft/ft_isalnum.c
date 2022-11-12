/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:04:33 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/11 17:05:18 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	d;

	d = (unsigned char)c;	
	if (('A' <= d && d <= 'Z') || ('a' <= d && d <= 'z'))
		return (1);
	else if ('0'<= d && d <= '9')
		return (1);	
	else
		return (0);
}
