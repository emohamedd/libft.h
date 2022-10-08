
#include "libft.h"

    int nbrlen(int n)
{
    int cnt;

    cnt = 0;
    if (n <= 0 )
    cnt++;
    while( n % 10)
    {
        cnt++;
        n = n / 10;
}
        return cnt;
}
char *ft_itoa(int n)
{
    int i;
    int size;
    char  *str;

    size = nbrlen(n);
    i = size - 1;
    str = malloc(sizeof( char ) * (size + 1));

    if ( n == 0)
    str[0] = n + 48;
    if ( n < 0)
    {
    str[0] = '-';
    n = -n;
    }
    while(n % 10)
    {
        str[i] = ( n % 10) + 48 ;
        n = n / 10;
        i++;
    }
    str[size] = '\0';
    return str;
}