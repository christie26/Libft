/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:41:41 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/11 11:18:56 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_print_int(int a)
{
	char	b;

	b = a + '0';
	write(1, &b, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	new;
	int				c;

	if (nb < 0)
	{
		new = -nb;
		write(1, "-", 1);
	}
	else
		new = nb;
	c = new % 10;
	if (new >= 10)
	{
		new /= 10;
		ft_putnbr(new);
	}
	ft_print_int(c);
}
