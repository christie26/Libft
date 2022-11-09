void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(char *)s = c)
			break;
		s++;
	}
	if (n == 0)
		return (0);
	else
		return (s);
}
