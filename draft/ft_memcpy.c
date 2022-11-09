void	*memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;

	while (n--)
		*d++ = *s++;
	return (dst);	
}
// in case they're null
