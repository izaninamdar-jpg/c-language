#include <stdio.h>
#include <stdlib.h>

int main (){
    float *ptr ;
   ptr = (float*)calloc(5 , sizeof(float));
  for ( int i = 0 ;i<3;i++){
    ptr [i]=i+1;
  }
  ptr = realloc (ptr,8);
    for ( int i = 3 ;i<8;i++){
    ptr [i]=i+1;
  }
  for ( int i = 0 ;i<8;i++){
  printf("%f\n",ptr[i]);
  }
}