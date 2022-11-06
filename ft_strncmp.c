/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:55:22 by yoonsele          #+#    #+#             */
/*   Updated: 2022/08/31 18:56:25 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_charcmp(char s1, char s2)
{
	return ((unsigned char)s1 - (unsigned char)s2);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i + 1 < n) && s1[i] && s2[i])
	{
		if (((unsigned char)s1[i] - (unsigned char)s2[i]) != 0)
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
// have to check both string is null to avoid segmentation fault
// dont't make unsigned int negaative
// after they check n characters are same, they compare next one.. 
// -> that's why I put (i+1)
