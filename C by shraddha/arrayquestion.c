#include <stdio.h>
int countodd(int arr[],int n);
int main(){
int kuch[]={1,2,3,4,5,6};
printf("%d",countodd(kuch,6));
return 0;

}
int countodd(int arr[],int n ){
    int count;
    for (int i=0;i<n;i++){
        if (arr[i]%2 !=0){
            count++;
        }
    }
    return count;
}