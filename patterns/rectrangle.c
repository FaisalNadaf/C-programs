#include <stdio.h>

void main()
{
    int l, w;

    printf("Enter the Length of the rectrangle: ");
    scanf("%d", &l);
    printf("Enter the width of the rectrangle: ");
    scanf("%d", &w);
    for (int i = 0; i <= l; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0 || i == w || j == l)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}