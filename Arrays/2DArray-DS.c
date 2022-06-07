#include <stdio.h>
int main()
{
    int arr[6][6], i, j, max;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int hourglass[4][4];

        for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            hourglass[i][j] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

        }
    }

    max = hourglass[0][0];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(hourglass[i][j]>max)
                max = hourglass[i][j];
        }
        
    }
    
    printf("%d", max);

    return 0;
}
