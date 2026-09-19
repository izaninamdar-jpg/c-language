#include <stdio.h>
int arr(int n);
int main(){
    printf("%d\n",arr(5));
    return 0;
}
int arr(int n){
    return n * n;
}