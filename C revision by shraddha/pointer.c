
#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main() {
    int a = 3, b = 5;
    int sum, prod, avg;

    doWork(a, b, &sum, &prod, &avg);

    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
    return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}












/*/ int swap (int *n, int *m);
int main (){
int a = 5 ;
int b = 9;
swap(&a,&b);
printf("%d\n%d\n",a ,b);
    return 0;
}
int swap(int *n, int *m){
    int temp = *n;
    *n= *m;
    *m = temp;
printf("%d \n%d \n",*n,*m);
return 0;
}


*/