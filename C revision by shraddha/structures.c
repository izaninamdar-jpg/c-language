#include <stdio.h>
#include <string.h>

typedef struct address {
  int  house;
  int block;
  char city[100] ;
  char state[100];

} add;
int main (){
    add person[5]; printf("enter the details");
    for ( int i = 0; i < 5 ; i++){
       
        scanf("%d", &person[i].house);
        scanf("%d", &person[i].block);
        scanf("%s", person[i].city);
        scanf("%s", person[i].state);

    }
    for ( int i = 0 ; i < 5 ; i++){
        
        printf ("%d\n", person[i].house);
        printf ("%d\n", person[i].block);
        printf ("%s\n", person[i].city);
        printf ("%s\n", person[i].state);

    }
return 0;
}





/*
int main () {   
    // 1. Group the structures into an array of size 5
    add p[5] = {
        {1, 1, "parli", "maharashtra"},
        {2, 2, "parbhani", "maharashtra"},
        {3, 3, "selu", "maharashtra"},
        {4, 4, "pune", "maharashtra"},
        {5, 5, "abd", "maharashtra"}
    }; 

    // 2. Loop from index 0 to 4
    for (int i = 1; i <= 5; i++) {
        // Use p[i] to access each item dynamically
        printf(" House %d, Block %d, %s, %s\n",  p[i].house, p[i].block, p[i].city, p[i].state);
    }

    return 0;
}
*/