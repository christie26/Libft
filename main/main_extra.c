/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_extra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:11:37 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/15 20:46:08 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
/*
	// substr
	char *s = "happye";
	unsigned int start = 3;
	size_t	len = 4;
	printf("ft_substr:%s\n",ft_substr(s, start, len));
//	printf("ft_substr:%s\n",ft_substr("hola", 4294967295, 0));
	printf("ft_substr:%s\n",ft_substr("", 1, 1));
	
	//strjoin
	//	printf("ft_strjoin:%s\n", ft_strjoin("happy","123"));	
*/
	// split
	char	**tab;
	tab = ft_split("xxxxxxxxhello!", 'x');
	int	i = 0;
	while (tab[i])
	{
	printf("%dth is %s\n", i, tab[i]);
	i++;
	}
/*
	//itoa
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-623));
*/
}
