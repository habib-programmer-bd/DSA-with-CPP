#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int n[a];
    int c[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &c[i]);
    }

    for (int i = 0; i < a; i++)
    {

        int x = n[i] + c[a - 1 - i];
        printf("%d ", x);
    }

    return 0;
}