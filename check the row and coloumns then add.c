#include <stdio.h>

void add(int a[10][10], int b[10][10], int c[10][10], int m, int n)
{
    int i, j;

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            *(*(c+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
        }
    }
}

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int m, n, p, q, i, j;

    scanf("%d%d", &m, &n);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d%d", &p, &q);

    for(i = 0; i < p; i++)
    {
        for(j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    if(m != p || n != q)
    {
        printf("Matrix Addtion is not possible");
    }
    else
    {
        add(a, b, c, m, n);

        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                printf("%d", c[i][j]);

                if(j < n-1)
                    printf(" ");
            }
            printf("\n");
        }
    }

    return 0;
}
