
#include  "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t size;

    if(!s1 || !s2)
        return (NULL);
    size = ft_strlen(s1) + ft_strlen(s2);
    str = (char *)malloc(sizeof(char) * (size +  1));
    if (!str)
        return NULL;
    ft_memcpy(str,s1,ft_strlen(s1));
    ft_memcpy(str + ft_strlen(s1),s2,ft_strlen(s2));
    str[size] = '\0';
    return (str);
}
