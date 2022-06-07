#include <stdio.h>

void left_rotate(int n, int d, int *a)
{
    int temp;
    for (int i = 0; i < d; i++)  //runs as many times as Left Rotation needs to be done, i.e., d times
    {
        temp = a[0]; //storing the 1st element of the array in a variable named temp before Left Rotating so it doesn't get lost
        for (int j = 0; j < n-1; j++) //shifts every element to the left and runs till penultimate index, we know why!
        {
            a[j] = a[j + 1];
        }
        a[n-1] = temp; // last index gets the element at index 0 that was stored in temp before Left Rotation
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