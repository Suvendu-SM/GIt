#include <stdio.h>
#include <stdlib.h>

int main()
{
    long a[1000001];
    int N, T;
    scanf("%d", &T);
    while (T--)
    {
        long sum = 0;
        scanf("%d", &N);
        for (int i = 0; i < N; i++)
        {
            scanf("%ld", &a[i]);
        }
        for (int i = 0; i < N - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                sum += abs((a[i + 1] - a[i])) - 1;
            }
        }
        printf("%ld\n", sum);
    }

    return 0;
}
