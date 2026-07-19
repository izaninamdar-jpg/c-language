#include <stdio.h>


 typedef struct vector {
    int x;
    int y;
}shraddha ;


int  calcusum (struct vector v1 , struct vector v2 ,struct vector sum);



int main (){
     shraddha v1={5,10};
shraddha v2={3,7};
     shraddha sum = {0};
    calcusum( v1, v2, sum);
    return 0;

}
int  calcusum (struct vector v1,struct vector v2, struct vector sum) {
sum.x = v1.x + v2.x;
sum.y = v1.y + v2.y;
printf("sum of x is %d\n sum of y is %d",sum.x,sum.y);
return 0;
}


// typedef struct office_emplyees{
// int no_em;
// float attendence;
// char name[100];
// } oeys ;
// int main (){ 
// oeys s1 ={1000,90.00,"izan"};
// oeys s2 ={1001,98.88,"chetan"};
// printf("%d\n%f\n%s", s1.no_em,s1.attendence ,s1.name);
// printf("%d\n%f\n%s", s2.no_em,s2.attendence ,s2.name);
// }

