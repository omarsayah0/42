#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (!s || !f)
		return;
	i = 0;
	while(s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

#include <stdio.h>

#include <ctype.h>

void to_upper_even(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = toupper(*c);
}

int main(void)
{
    char str[] = "hello world";
    ft_striteri(str, to_upper_even);
    printf("%s\n", str);
}