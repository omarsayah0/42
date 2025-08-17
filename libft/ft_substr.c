#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	slen;

	
	if (!s)
		return (NULL);
	slen = 0;
	while (s[slen])
		slen++;	
	i = 0;
	if (start >= slen)
	{
		substring = (char *)malloc(1);
		if (!substring)
			return (NULL);
		substring[0] = '\0';
		return (substring);
}
	substring = (char *)malloc(len + 1);
	if (!substring)
		return (NULL);
	while (s[start + i] && i < len)
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
