#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int n[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &n[i]);
    }

    int x = 0;
    for (int i = 0; i < a; i++)
    {
        if (n[i] == x)
        {
            x++;
        }
    }
    printf("%d", x);

    return 0;
}