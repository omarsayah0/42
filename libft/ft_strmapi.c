#include "libft.h"

static size_t	len(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	slen;
	char	*string;
	size_t	i;

	if (!s || !f)
		return (NULL);
	slen = len(s);
	string = (char *)malloc(slen + 1);
	
	if (!string)
		return (NULL);
	i = 0;
	while (s[i])
	{
		string[i] = f((unsigned int)i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
