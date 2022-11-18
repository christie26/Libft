/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:45:02 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/15 18:56:19 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	size_t	i;

	if (!dst && !src)
		return (0);
	tmp = dst;
	if (dst < src)
	{
		i = 0;
		while (i < len)
		{
			tmp[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i-- > 0)
			tmp[i] = ((char *)src)[i];
	}		
	return (dst);
}