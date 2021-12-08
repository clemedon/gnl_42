#include "get_next_line.h"

void	*ft_free(void *ptr)
{
	if (ptr)
		free(ptr);
	ptr = NULL;
	return (NULL);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	while (s[len])
		len++;
	return (len);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	ss = malloc (sizeof(char) * (len + 1));
	if (!ss)
		return (NULL);
	i = 0;
	while (s[start + i])
	{
		ss[i] = s[start + i];
		i++;
	}
	ss[i] = '\0';
	return (ss);
}

ft_malloc(

char	*ft_strjoin(char *s1, char *s2)
{
}
