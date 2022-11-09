#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_alpha(c)|ft_digit(c))
		return (1);
	else
		return (0);	
}
