#include <stdio.h>
int main()
{
    int n, jumps = 0;
    scanf("%d", &n);
    int c[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &c[i]);
    }
    int j = 0;
    while (j != n-1)
    {
        if (c[j + 2] == 0)
        {
            jumps += 1;
            j += 2;
            continue;
        }
        if (c[j + 1] == 0)
        {
            jumps += 1;
            j += 1;
        }
    }
    printf("%d", jumps);
    return 0;
}