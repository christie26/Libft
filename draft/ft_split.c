#include "libft.h"

char	*ft_malloc(char **tab, char *s, char c, int cnt)
{
	int	j;
	int	size;
	int	set;

	j = 0;
	size = 0;
	set = 0;
	while (check_set(str, charset, j) == 1 && str[j++])
		set++;
	while (check_set(str, charset, j) == 0 && str[j++])
		size++;
	tab[i] = (char *)malloc((size + 1) * sizeof(char));
	if (!tab[i])
		return (0);
	str += set;
	j = -1;
	while (++j < size)
		tab[i][j] = str[j];
	tab[i][j] = 0;
	str += size;
	return (str);
}

void    ft_filltab(char **tab, char *s, char c, int idx_tab)
{
    int j;
    int cnt;

    if (*s == c)
        s++;    //check
    i = 0;
    cnt = 0;
    while (s[i++] != c)
        cnt++;
    tab[idx_tab] = (char *)malloc(sizeof(char) * (cnt + 1));
    if (!tab[idx_tab])
        return (0);
    i = 0;
    while (i++ < cnt)   // check
        tab[idx_tab][i] = *s++;
    tab[idx_tab][i] = 0;
}

char    **ft_split(char const *s, char c)
{
    char    **tab;
    char    *tmp;
    int     cnt;

    cnt = 1;
    tmp = (char *)s;
    while (*tmp++)
    {
        if (*tmp == c)
            cnt++;   
    }
    tab = (char **)malloc(sizeof(char *) * cnt);
    if (!tab)
        return (0);
    while (cnt--)
        ft_malloc(tab, s, c, cnt);
    tab = 0;
    return (tab);
}