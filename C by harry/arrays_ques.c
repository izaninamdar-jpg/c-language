#include <stdio.h>
int main (){
int table;
printf("enter the number\n");
int n;
scanf("%d",&n);
for (int i=1;i<11;i++){
    table= n * i ;
    printf("%d\n", table);

}return 0;
}