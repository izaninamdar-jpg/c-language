#include <stdio.h>
#include<string.h>
void salting (char password[]);
void slice(char str[],int n , int m);
int countvowels(char string[]);
void checkcharacters(char str[],char ch);

int main (){
    char str[]="apna college";
    char ch ='e';
    checkcharacters(str,ch);
   
}

void checkcharacters(char str[],char ch){
    for (int  i=0;   str[i] !='\0';i++ )
{ if (str[i]==ch){
    printf("character is present");
    return ;
}
} printf("character is not present");
}












// void salting(char password[]){
//     char salt[]="123";
// password[100];
//     strcat(password,salt);
//     puts(password);








// int main (){
//     char str[100];
//     char ch =0;
//     int i=0;

// while(ch !='\n'){
//     scanf("%c",&ch);
//     str[i]=ch;
//     i++;
// } str[i-1]='\0';
//      puts(str);
//  }
