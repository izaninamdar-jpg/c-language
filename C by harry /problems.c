#include <stdio.h>

int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("number is not prime\n");
    }
    else if (n > 1)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("number is not prime\n");
                break;
            }
            else
            {
                printf("number is prime\n");
                break;
            }
        }
    }
}

//   int i ; int sum =0;

// //   for (int i = 1; i<=10;i++){
// //     sum += i;
// //   }
// //   printf("The sum of the first 10 natural numbers is: %d\n", sum);
// //   return 0;
// // }
// do {
//     sum += i;
//     i++;
// }while (i<=10);

//  printf("The sum of the first 10 natural numbers is: %d\n", sum);
//   return 0;

// int main() {
//    int i = 1;
//    int sum = 0;
//    while (i<=10) {
//       sum += i;
//