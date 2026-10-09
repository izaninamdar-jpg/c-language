#include <stdio.h>

int main() {
    FILE *izan;
    char words[100];

    izan = fopen("izanfile1", "r");

    while 
   (fgets(words,sizeof words, izan)!= NULL ){
    printf("%s", words);}
    fclose (izan);
}