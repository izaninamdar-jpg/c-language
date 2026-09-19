#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the rows and colums of array");
    scanf("%d", &r);
    scanf("%d", &c);
    int arr[r][c];
    int transpose[r][c];
    printf("enter the elements");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }
    printf("the original array was :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
    printf("the transposed array is :\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf(" %d\n", transpose[i][j]);
        }
    }
    return 0;
}