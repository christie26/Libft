/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoonsele <yoonsele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 21:57:03 by yoonsele          #+#    #+#             */
/*   Updated: 2022/08/31 15:17:01 by yoonsele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (src[j] != 0 && (j + i + 1) < size)
	{
		dest[i + j] = src[j];
		j++;
	}		
	if (size > 0 && i <= size)
		dest[i + j] = 0;
	while (src[j] != 0)
		j++;
	if (size < i)
		return (j + size);
	else
		return (i + j);
}
// now, i is strlen(dest)
// size is unsigned int
// If the src and dst strings overlap, the behavior is undefined
// strlcat() appends string src to the end of dst. 
// at most dstsize - strlen(dst) - 1 characters
// that dst is not a proper string).
// strlen(dest) = 5, strlen(src) = 13, n = 3 -> return is 16 (not 18)
