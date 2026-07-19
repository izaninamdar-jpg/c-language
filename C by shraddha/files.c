#include<stdio.h>
int main (){
    FILE *fptr;
   fptr= fopen("sum.txt","r");
int a ;
 fscanf(fptr,"%d",&a);
int b ;
 fscanf(fptr,"%d",&b);

fclose(fptr);
fptr=fopen("sum.txt","w");
int sumis=a + b;
fprintf(fptr,"%d",sumis );
fclose(fptr);



//   \n",fgetc(fptr));
//  printf("%c\n",fgetc(fptr));
//  printf("%c\n",fgetc(fptr));
//  printf("%c\n",fgetc(fptr));
//  printf("%c\n",fgetc(fptr));
   
      return 0;}
    
