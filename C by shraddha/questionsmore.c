#include <stdio.h>
void printnamaste() ;
void printnamaste () {
    printf("namaste\n");
}
void printbanjour () ;
void printbanjour (){
    printf("banjour");
}
int main (){ 
    
    char language ;
    
    printf("enter the language you want i OR s") ;
    scanf(" %c",&language);
    if (language == 'i'){
    printnamaste();} else { 
    printbanjour () ;}
    return 0;
    }
