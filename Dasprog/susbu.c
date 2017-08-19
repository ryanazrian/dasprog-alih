#include <stdio.h>

int main()
{
    int n, m, k, l, i, j, x[1000][1000], y[1000][1000], a, b;
    scanf("%d %d", &n, &m);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
    scanf("%d %d", &k, &l);
    a=k-1; b=l-1;
    for (i=1;i<=k;i++)
    {
        for (j=1;j<=l;j++)
        {
            scanf("%d", &y[i][j]);
        }
    }
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            if (x[i][j]==y[1][1] && x[i+a][j+b]==y[k][l])
            {
                printf("%d %d\n", i-1, j-1);
                return 0;
            }
        }
    }
}
