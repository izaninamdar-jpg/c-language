#include <stdio.h>
typedef struct vector {
    int x ;
    int y ;
} vector ;
void vectorsum ( vector v1 , vector v2 , vector sum );
int main (){
vector v1 = { 2, 4};
vector v2 = { 3, 5};
vector sum = {0};
vectorsum (v1,v2, sum );
}
void vectorsum ( vector v1 , vector v2 , vector sum ){
     sum.x =   v1.x +  v2.x ;
     sum.y =   v1.y +  v2.y;
     printf("%d \n%d\n", sum.x , sum.y);
}