#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int n;
        scanf("%d", &n);
        int q[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &q[i]);
        }
        int total_bribes = 0;

        // Har value max apne 2 place left tak ja sakti hai, wrna 2 se zyada bribe and "Too chaotic"
        // index i pr ideally i+1 value honi chahiye
        
        for (int i = n - 1; i >= 0; i--)
        {
            if (q[i] != i + 1) // kyunki hm values ko unki sahi jgh la rhe hain if they are upto 2 places left, toh bht cases mein yh condition false hogi jisse program ko run hone mein time kam lagega
            {
                if (i - 1 >= 0 && q[i - 1] == i + 1) // i-1 >= 0 check kiya taki array apni index k bhr hi na chla jaye
                {
                    //Value apni original jagah se 1 place left mein hai aur use swap ki madad se originial jagah pr laye and acc gin liya kitna bribe diya hoga usne, i.e., 1
                    q[i - 1] = q[i];
                    q[i] = i + 1; //ideally toh yhi hoga
                    total_bribes += 1;
                }

                else if (i - 2 >= 0 && q[i - 2] == i + 1) // same logic for i-2
                {
                    ////Value apni original jagah se 2 place left mein hai aur use swap ki madad se originial jagah pr laye and acc gin liya kitna bribe diya hoga usne, i.e., 2
                    q[i - 2] = q[i - 1];
                    q[i - 1] = q[i];
                    q[i] = i + 1; //ideal case mein toh yhi honi chahiye and hmein krna bhi yhi h
                    total_bribes += 2;
                }
                else // iska mtlb more than 2 places left hai value which is only possbile with 3 or more bribes
                {
                    printf("Too chaotic\n");
                    goto label;
                }
            }
        }
        printf("%d \n", total_bribes);
    label:
        t -= 1;
    }
    return 0;
}
