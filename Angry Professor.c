
#include<stdio.h>

int main()
{
    int count, i, K, N, T, time;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d %d", &N, &K);
        count = 0;
        for (i = 0; i < N; i++)
        {
            scanf("%d", &time);
            if (time <= 0)
                count++;
        }
        puts((count < K) ? "YES" : "NO");
    }
    return 0;
}