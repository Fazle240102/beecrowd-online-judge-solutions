#include <stdio.h>
int main()
{
    double x[12][12], sum = 0;
    int i, j, k, m;
    char ch;

    scanf("%c", &ch);
    for (j = 0; j < 12; j++)
    {
        for (k = 0; k < 12; k++)
        {
            scanf("%lf", &x[j][k]);
        }
    }

    if (ch == 'S')
    {
        for (i = 0; i < 11; i++)
        {

            for (m = 10 - i; m >= 0; m--)
            {
                sum += x[i][m];
            }
        }
        printf("%.1lf\n", sum);
    }
    else if (ch == 'M')
    {
        for (i = 0; i < 11; i++)
        {

            for (m = 10 - i; m >= 0; m--)
            {
                sum += x[i][m];
            }
        }
        printf("%.1f\n", sum / 66.0);
    }
}