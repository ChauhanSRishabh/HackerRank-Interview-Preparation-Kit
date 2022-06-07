#include <stdio.h>
int main()
{
    int n, i, ar[101];
    scanf("%d", &n);
    for (int i = 0; i < 101; i++)
    {
        ar[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        int j;
        scanf("%d", &j);
        ar[j] += 1;
    }

    int total =0;
    for (int i = 0; i < 101; i++)
    {
        if(ar[i]>0)
        {
            total += ar[i]/2;
        }
    }
    printf("%d", total);
    return 0;
    
}
