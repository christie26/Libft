/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:41:39 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/11 11:18:54 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_digit(int n, int *flag, unsigned int *nb)
{
	int				cnt;
	unsigned int	tmp;

	if (n == 0)
		return (1);
	cnt = 0;
	if (n < 0)
	{
		*nb = -n;
		cnt++;
		*flag = 1;
	}
	else
		*nb = n;
	tmp = *nb;
	while (tmp)
	{
		cnt++;
		tmp /= 10;
	}
	printf("cnt=%d\n",cnt);
	return (cnt);
}

void	ft_fillres(char *tmp, char *res, unsigned int n)
{
	if (n >= 10)
		ft_fillres(tmp - 1, res, n / 10);
	*tmp = (n % 10) + '0';
}

char	*ft_itoa(int n)
{
	int				digit;
	unsigned int	nb;
	int				flag;
	char			*res;
	char			*tmp;

	digit = find_digit(n, &flag, &nb);
	res = (char *)malloc(sizeof(char) * (digit + 1));
	if (!res)
		return (0);
	tmp = res;
	if (flag)
		*tmp = '-';
	printf("nb=%u\n",nb);

	ft_fillres((tmp + digit - 1), res, nb);
	res[digit] = 0;
	return (res);
}

int	main(void)
{
	int	n;

	n = -2147483648;
	printf("%d=%s\n", n, ft_itoa(n));
}
