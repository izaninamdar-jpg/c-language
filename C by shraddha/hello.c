#include<stdio.h>
void swap(int a, int b);
void _swap(int*a,int*b);

 int main(){
  int x = 3, y= 5;
  _swap(&x,&y);
  printf("x=%d & y=%d",x,y);

return 0;
 }
void _swap(int*a,int*b){
int t=*b;
*b=*a;
*a=t;

}
void swap(int a,int b){
    int t = a;
    a=b;
    b=t;
    printf("a=%d & b=%d",a,b);
}



















//     int x, *ptr;
//     ptr = &x;
//     *ptr=0;
//     printf("%d\n",x);
//     printf("%d\n",*ptr);
//      *ptr +=5;
//       printf("%d\n",x);
//     printf("%d\n",*ptr);
//     (*ptr)++;
//    printf("%d\n",x);
//     printf("%d\n",*ptr);
//  }