
#include <stdio.h>
int main (){ FILE *fp;

fp = fopen("data.txt", "w");

if (fp == NULL) {
    printf("File could not be opened\n");
    return 1;
}

/* work with file */

fclose(fp);
return 0;}