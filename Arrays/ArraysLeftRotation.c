#include <stdio.h>

void left_rotate(int n, int d, int *a)
{
    int temp;
    for (int i = 0; i < d; i++)  //runs as many times as Left Roattion needs to be done, i.e., d times
    {
        temp = a[0];
        for (int j = 0; j < n-1; j++)
        {
            a[j] = a[j + 1];
        }
        a[n-1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int n, d;
    scanf("%d %d", &n, &d);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    left_rotate(n, d, a);
    return 0;
}