#include <stdio.h>
#include <stdlib.h>
int main (){
    int *ptr;
    int n;
    printf("enter the n ");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));

    for (int i = 0;i<n;i++){
        printf("%d\n",ptr[i]);
    // }  
    // float *ptr;2

    // ptr = (float *)malloc(5 * sizeof(float)); 
    // ptr[0]=1;
    // ptr[1]=3;
    // ptr[2]=5;
    // printf("%d\n%d\n%d\n",ptr[0],ptr[1],ptr[2]);
    // printf("%d\n",sizeof(int));
    // printf("%d\n",sizeof(float));
    // printf("%d\n",sizeof(char));
    return 0;
}}