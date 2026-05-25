#include <stdio.h>
#include <string.h>

int main()
{
    char a[1005];
    char b[1005];
    int x, y;
    scanf("%s", a);
    scanf("%s", b);
    scanf("%d %d", &x, &y);
    int len = strlen(b);
    printf("%s", a);
    for (int i = x; i <= y && i < len; i++)
    {
        printf("%c", b[i]);
    }
    return 0;
}