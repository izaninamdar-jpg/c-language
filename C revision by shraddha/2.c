#include <stdio.h>
int main (){
    int n = 6;
    int a =0;
    int  b= 1, c;
    for (int   i = 2; i <=n ;i++){
    c = a + b;
    a = b ;
    b = c;
    }
    printf( "%d", c);
    return 0;
  } 
  #include <stdio.h>

int temp (int a );
int main (){
    temp(5);
    return 0;
}
int temp (int a){
    if (a> 28 ){
        printf("hot\n");
    } else {
        printf("cold\n");
    }
    return 0;
}