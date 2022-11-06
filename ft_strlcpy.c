/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:22:45 by yoonsele          #+#    #+#             */
/*   Updated: 2022/08/30 15:23:45 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != 0)
	{
		i++;
	}	
	while (j + 1 < size && src[j] != 0)
	{
		dest[j] = src[j];
		j++;
	}
	if (size > 0)
		dest[j] = 0;
	return (i);
}
