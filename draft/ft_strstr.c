/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:56:43 by yoonsele          #+#    #+#             */
/*   Updated: 2022/08/30 22:27:53 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

int	check_all(char *str, char *to_find, int i)
{
	int	j;

	j = 0;
	while ((to_find[j] != 0) && (str[i + j] == to_find[j]))
	{
		j++;
	}
	if (to_find[j] == 0)
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[i] == 0)
		return (str);
	while ((check_all(str, to_find, i) != 1) && (str[i] != 0))
	{
		i++;
	}
	if (str[i] == 0)
		return (0);
	else
		return (&str[i]);
}
// if both are null -> doesn't have return value
