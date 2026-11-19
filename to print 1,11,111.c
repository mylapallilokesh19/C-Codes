#include <stdio.h>

int main()
{
    int a=1,n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        printf("\n%d ",a);
        a=10*a+1;
        }
    return 0;
}
