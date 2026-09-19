#include <stdio.h>

int main()
{
    int arr[5];
    int searchValue;
    int found = 0;

    printf("Enter 10 elements:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &searchValue);

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == searchValue)
        {
            printf("Element found at position %d.\n", i + 1);
            found++;
        }
    
    }
    if (found==0) {
    
        printf("Element not found.\n");
    }
    
    return 0;
}