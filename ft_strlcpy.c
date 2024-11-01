#include <stdio.h>

size_t ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    return i;
}

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t srclen;
    size_t index;

    index = 0;
    srclen = ft_strlen(src) + 1;

    if (dstsize >= srclen)
    {
        while (src[index])
        {
            dst[index] = src[index];
            index++;
        }
        dst[index] = '\0';
    }
    else 
    {
        while ((dstsize - 1) > 0 && src[index])
        {
            dst[index] = src[index];
            index++;
            dstsize--;
        }
        dst[index] = '\0';
    }
    return (srclen);
}