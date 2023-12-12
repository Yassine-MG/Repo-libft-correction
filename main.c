#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
    //printf("%s\n", strnstr(NULL, "gfhgfs", 0));
    char *src = "helio";
    char *dst = "hello";
    printf("1: %s\n%p\n", src, src);
    printf("1: %s\n%p\n", dst, dst);
    printf("%s\n", (char *) memcpy(dst, src, 5));
    return (0);
}