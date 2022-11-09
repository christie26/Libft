
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n && *(char *)s1++ == *(char *)s2++)
		n--;
	if (n == 0)
		return (0);
	else
		return (*(char *)s1 - *(char *)s2);	
}
