/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_extra.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:11:37 by yoonsele          #+#    #+#             */
/*   Updated: 2022/11/13 19:52:46 by yoonsele         ###   ########.fr       */
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
	*/
	//strjoin
	//	printf("ft_strjoin:%s\n", ft_strjoin("happy","123"));	

	// split
	char	**tab;
	tab = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
	int	i = 0;
	while (tab[i])
	{
	printf("%dth is %s\n", i, tab[i]);
	i++;
	}
/*
	//itoa
	int	main(void)
	{
		int	n;

		n = -2147483648;
		printf("%d=%s\n", n, ft_itoa(n));
*/
}
