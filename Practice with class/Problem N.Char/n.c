#include <stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    if (n >= 97 && n <= 122)
    {
        // choro hater
        int ans = n - 32;
        printf("%c", ans);
    }

    else
    {
        int ans = n + 32;
        printf("%c", ans);
    }
    return 0;
}