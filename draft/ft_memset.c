void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*dst;

	i = 0;
	dst = (char *)b;
	while (i++ < len)
		dst[i] = (unsigned char)c;
	return (dst);
}
