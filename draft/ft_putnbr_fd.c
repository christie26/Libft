/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:22:46 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/13 14:38:35 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	new;
	int				tmp;
	char			c;

	if (n < 0)
	{
		new = -n;
		write(1, "-", 1);
	}
	else
		new = n;
	tmp = new % 10;
	if (new >= 10)
	{
		new /= 10;
		ft_putnbr_fd(new, fd);
	}
	c = tmp + '0';
	write(fd, &c, 1);
	return ;
}
