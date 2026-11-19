#include <stdio.h>

int calculateTotal(int goals[], int n)
{
    int i, total = 0;

    for(i = 0; i < n; i++)
    {
        total = total + goals[i];
    }

    return total;
}

int main()
{
    int n, i, goals[100], total;

    scanf("%d", &n);

    if(n <= 0)
    {
        printf("Invalid Input");
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &goals[i]);
        }

        total = calculateTotal(goals, n);

        printf("%d", total);
    }

    return 0;
}
