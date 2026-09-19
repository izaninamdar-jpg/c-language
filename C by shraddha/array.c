#include <stdio.h>
int countodd(int arr[],int n);
int main(){
int kuch[]={1,2,3,4,5,6};
printf("%d",countodd(kuch,6));
return 0;

}
int countodd(int arr[],int n ){
    int count = 0;
    for (int i=0;i<n;i++){
        if (arr[i]%2 !=0){
            count++ ;//or count=couunt+ 1;
        }
    }
    return count;
}

// int main (){
//   int marks[2][3];
//   marks [0][0]=90;
//   marks[0][1]=89;
//   marks [0][2]=78;
//   marks[1][0]=98 ;
//   marks[1][1]=89;
//   marks[1][2]=88;
//   printf("%d\n",marks[0][0]);

//    return 0;
  
// }

// // / int arr[]={2,3,4,5};
//     // printf("%d\n%d\n%d\t%d\n",arr[0],arr[1],arr[2],arr[3]);