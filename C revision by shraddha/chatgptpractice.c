#include <stdio.h>
int main(){
    int n, last;
    int sum = 0;
    printf("Enter a number: ");         
    scanf("%d", &n);
    while (n != 0) {
    last = n % 10; 
    sum = sum  + last;
    n = n/10; 
    }
    printf("Reversed number: %d\n", sum);    
    return 0;
}