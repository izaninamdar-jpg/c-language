#include<stdio.h>       

int main(){
    int i;
    int *j=&i;
    int k ;

    printf("address of i is %.2u\n",j);

    printf("address of i is %.2u\n",&k);

    return 0;
}