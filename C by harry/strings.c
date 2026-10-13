#include <stdio.h>
int main (){
    int str[15];
   for (int i = 0 ; i<=15 ; i++){
    printf("the addresses of all are %u\n", &str[i]); }
    return 0;
}  