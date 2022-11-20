/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 08:32:52 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/20 18:43:33 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_space(char c)
{
	if (c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == '\t' || c == ' ')
		return (1);
	else
		return (0);
}

static int	is_sign(char c, int *count)
{
	if (c == '+' || c == '-')
	{
		if (c == '-')
			(*count)++;
		return (1);
	}
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	long long	j;
	int			count;

	i = 0;
	j = 0;
	count = 0;
	while (is_space(str[i]) == 1)
		i++;
	if (is_sign(str[i], &count) == 1)
		i++;
	while (('0' <= str[i]) && (str[i] <= '9'))
	{
		j = (j * 10) + (str[i] - '0');
		i++;
	}
	if (count == 1)
		j = -j;
	return (j);
}
