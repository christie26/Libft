/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:21:30 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/11 19:00:41 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*new;

	len = ft_strlen(src);
	new = (char *)malloc((len + 1) * sizeof(char));
	if (!(new))
		return (0);
	i = 0;
	while (src[i++])
		new[i] = src[i];
	new[i] = 0;
	return (new);
}
// If insufficient memory is available, 
// NULL is returned and errno is set to ENOMEM.
