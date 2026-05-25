#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    char n[1000005];
    scanf("%s", n);
    int x = 0;
    for (int i = 0; i < a; i++)
    {
        x = x + n[i] - '0';
    }

    if (x % 3 == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}