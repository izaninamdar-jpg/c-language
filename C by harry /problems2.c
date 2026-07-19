#include <stdio.h>  
int fibonacci(int n);  
  
int main (){
    int x = 10;
    printf("The number is: %d\n", fibonacci(10));
return 0;
}
int fibonacci(int n ){
    if (n==0 || n==1){
      return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);     
    }
}