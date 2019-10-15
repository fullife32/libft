#include "libft.h"

char                *ft_substr(char const *s, unsigned int start, size_t len)
{
    unsigned int    i;
    char            *str;

    i = 0;
    if (!(str = malloc(sizeof(char) * (len + 1))))
        return (0);
    while (i < len && start < ft_strlen(s))
    {
        str[i] = s[start];
        i++;
        start++;
    }
    str[i] = '\0';
    return (str);
}