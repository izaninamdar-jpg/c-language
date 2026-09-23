#include <stdio.h> 
#include <math.h>


typedef struct {
  int x,y,z;
}affanbhai;

int izanbhai(affanbhai a1 , affanbhai a2,affanbhai a3);

int main (){
affanbhai a1 ={343,443,523} ;
affanbhai a2 = {254,522,723};
affanbhai a3 = {433,665,343};
printf("the value is \n%d\n", izanbhai (a1,a2,a3));
return 0;
}


int izanbhai(affanbhai a1,affanbhai a2 , affanbhai a3){
  int sum1,sum2,sum3;
 sum1 =  a1.x + a2.x + a3.x ; 
 //printf("%d",sum1);
 sum2 = a1.y +a2.y +a3.y;
  //printf("%d",sum2);
 sum3 = a1.z + a2.z +a3.z;
  //printf("%d",sum3);
return sum1 +sum2 + sum3;
}
