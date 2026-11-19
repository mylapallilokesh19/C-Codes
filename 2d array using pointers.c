#include<stdio.h>
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
     int (*p1)[2]=a,(*p2)[2]=b,(*p3)[2]=c;

    printf("\nEnter the values of array a:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",(*(p1+i)+j));
        }
    }

    printf("\nEnter the values of array b:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",(*(p2+i)+j));
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            *(*(p3+i)+j)=*(*(p1+i)+j)+*(*(p2+i)+j);
        }
    }

    printf("\nValues of array a:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",*(*(p1+i)+j));
        }
        printf("\n");
    }

    printf("\nValues of array b:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",*(*(p2+i)+j));
        }
        printf("\n");
    }

    printf("\nValues of array c:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",*(*(p3+i)+j));
        }
        printf("\n");
    }

    return 0;
}
