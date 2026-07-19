#include <stdio.h>
int main (){
    char ch;
    char *p1 = &ch;
    for (*p1='A'; *p1<='Z'; (*p1)++){
        printf("%c\n",*p1);
    }
}

//     int a = 10  , b= 5;
//     int *p1, *p2;
// p1 = &a;
// p2 = &b;
// if (*p1>*p2){
//     printf("a is bada");
// } else {printf("b bada hai");}