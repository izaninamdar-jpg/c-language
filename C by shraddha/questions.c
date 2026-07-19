#include <stdio.h>
void dowork(int a,int b, int *sum , int *prod, int *avg);

int main (){

int sum , prod , avg;dowork(3,6,&sum,&prod,&avg);
printf("%d\n%d\n%d\n",sum,prod,avg);
  
}
void dowork(int a, int b,int *sum , int *prod, int *avg ){
 *sum = a + b;
 *prod = a *b;
*avg = (a + b)/2;
}


// int sum =0; 
// for (int i = 1, j = n; i <= n; i++)
// {
//   sum = sum + i; }
//   printf("%d\n",sum);
//   // for (int i = n ; i>=1 ; i--)
//   // {printf("%d\n", i);
//   // }
//   return 0;
// }




//   int n = 1; 
//   do {
//     printf("%d\n",n);
//     n++;
//   } while (n<=5);
// }

  // for ( int m = 3; m <=n; m++) {
  //   printf("%d\n",m );
  // }
  //  }
  // printf("0\n");
//   int m = 0;
// while (m<=n ){
//   printf("%d\n",m);
//   m++ ; 
// ÷