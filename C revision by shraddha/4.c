#include <stdio.h>

void greeting(char name[])
{
    printf("Hello, %s!\n", name);
}

int reverseNumber(int number)
{
    int reverse = 0;

    while (number != 0)
    {
        // Get the last digit of number and append it to reverse.
        reverse = reverse * 10 + number % 10;
        // Remove the last digit from number.
        number /= 10;
    }

    // Return the digits in reverse order.
    return reverse;
}

int main(void)
{
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    greeting(name);
    return 0;
}

/*
    Function Practice Questions (C)
    Write your answers in C and I will check/correct them as your teacher.

    1. Write a function named addNumbers that takes two integers as arguments
       and returns their sum.

    2. Write a function named multiply that takes two float values and returns
       their product.

    3. Write a function named isEven that takes an integer and returns 1 if the
       number is even, otherwise 0.

    4. Write a function named square that takes an integer and returns its square.

    5. Write a function named maxNum that takes three integers and returns the
       largest number.

    6. Write a function named factorial that takes an integer n and returns the
       factorial of n.

    7. Write a function named swap that takes two integer variables by reference
       and swaps their values.

    8. Write a function named average that takes three floating-point numbers and
       returns their average.

    9. Write a function named power that takes a base and an exponent and returns
       base^exponent using a loop.

    10. Write a function named greeting that takes a name as a string and prints
        "Hello, <name>!".

    11. Write a function named sumArray that takes an integer array and its size,
        and returns the sum of all elements.

    12. Write a function named countVowels that takes a string and returns the
        number of vowels in it.

    13. Write a function named checkPrime that takes an integer and returns 1 if
        it is prime, otherwise 0.

    14. Write a function named areaOfCircle that takes the radius and returns the
        area of a circle using pi = 3.14.

    15. Write a function named reverseNumber that takes an integer and returns the
        reverse of that number.

    Hint: Try to write each function with proper return type, parameters, and a
    simple main() to test your code.
*/
