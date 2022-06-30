#include "libft.h"

int __intlen(const int n)
{
    int result;
    int x;

    x = n;
    if (x < 0)
        result++;
    while (x)
    {
        result++;
        x = x / 10;
    }
    return (result + 1);
}

char *ft_itoa(int n)
{
    int x;
    char *result;
    int rlen;
    int i; 

    x = n;
    i = 0;
    rlen = __intlen(x);
    result = (char *) malloc (rlen * sizeof(char));
    rlen = rlen - 1;
    if (x < 0)
    {
        result[i++] = '-';
        x = x * -1;
    }
    i = (rlen - 1);
    while (x > 0 || (i >= 0 && !result[i]))
    {
        result[i--] = ((x % 10) + 48);
        printf("result[%d] = %c\n", (i+ 1), result[i + 1]);
        x = x / 10;
    }
    result[rlen + 1] = 0;
    return (result);

}
/*
#include <stdio.h>
int main()
{
    int x = 23121;
    char    *y = ft_itoa(x);

    while (*y)
    {
        printf("%c", *y++);
    }
    printf("\n");
    return (0);
}
*/