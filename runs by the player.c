#include <stdio.h>

float calculateAverage(int total, int n)
{
    return (float)total / n;
}

int main()
{
    int n, i, runs[100], total = 0;
    float avg;

    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid Input");
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &runs[i]);
            total = total + runs[i];
        }

        avg = calculateAverage(total, n);

        printf("%.2f", avg);
    }

    return 0;
}
