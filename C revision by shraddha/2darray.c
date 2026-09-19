#include <stdio.h>
int main()
{
    int r, c;
    printf("enter the no of rows\n");
    scanf("%d", &r);
    printf("enter the number of colums\n");
    scanf("%d", &c);
    int arr1[r][c], arr2[r][c], ans[r][c];
    printf("enter the elements of first array\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("enter the elementf of second array\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            ans[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printf("the sumationn of array 1 and array 2 are \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d\n", ans[i][j]);
        }
    }
    return 0;
}