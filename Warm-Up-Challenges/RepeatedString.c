#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    long long n, count=0;
    scanf("%s %lld", s, &n);
    int length;
    length =strlen(s);

    for (int i = 0; i < length; i++)
    {
        if(s[i]=='a')
            count += 1;

    }
    long long p;
    p = n/length;
    count *= p;

    if(n%length != 0)
    {
        for (int i = 0; i < n%length; i++)
        {
            if(s[i] == 'a')
                count += 1;
        }
    
    }
    
    printf("%lld", count);

    return 0;
}