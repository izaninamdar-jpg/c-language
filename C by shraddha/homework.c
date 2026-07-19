#include<stdio.h>

void reversearray(int arr[],int n);
void printarray(int arr[],int n);

int main (){
  int array[]={1,2,3,4,5};
reversearray(array,5);
printarray(array,5);
return 0;
}
  void reversearray(int arr[],int n){
    for (int i = 0; i < n/2;i++){
    int firstvalue = arr[i];
    int secondvalue= arr[n-i-1];
    arr[i]=secondvalue ;
    arr[n-i-1]=firstvalue;
    }}
    void printarray(int arr[],int n){
      for (int i = 0; i < n ;i++){
        printf("%d\t",arr[i]);}
printf("\n");
      }

    

  
  

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
    
  
  
  
  
  
  
  
  
  
  
  
  
  // int n ,isprime = 1;










  //  printf("enter the number");
  //  scanf("%d",&n);

  //  if (n<=1){
  //   isprime = 0;
  //  }else {
  //   for (int i=2;i < n;i++){ 
  //     if (n%i ==0){
  //       isprime = 0;
  //       break;
  //     }
  //   }
  //  }
  //  if (isprime ==00){
  //   printf("its not prime numbebr");
  //  }else{printf("its is");}
 
    
     
  //    return 0;}





// int a , b;
    // printf("enter the lenth and bredth of rectangle");
    // scanf("%d\n%d",&a,&b);
    // printf("the perimeter of rectangle is :%d",2*(a+b));
    // return 0;
  // printf("enter the number you want cube of ");
    // scanf("%d",&n);
    // printf("c // char chara = 'i';
    // if ( chara <= '9' && chara >= '0'){
    //     printf("its a digit");
    // }else {
    //     printf("its not digit");
    // }//   int a , b;
//   printf("enter the a and b");
//   scanf("%d%d",&a,&b);
//    if (a>b){
//     printf("a is big");
//    }else { 
//     printf("b is big");
//    }