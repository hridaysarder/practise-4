#include <stdio.h>
int main()
{
    char alpha;
    scanf("%c", &alpha);
    if (alpha == 'z')
    {
        int ans = 97;
        printf("%c", ans);
    }
    else if (alpha >= 'a' && alpha <= 'z')
    {
        int ans = alpha + 1;
        printf("%c", ans);
    }
    return 0;
}