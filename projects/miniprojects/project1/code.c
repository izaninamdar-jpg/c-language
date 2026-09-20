#include <stdio.h>

int main()
{
    float income, tax = 0, originalincome;
    printf("=========================================\n");
    printf("      Indian Income Tax Calculator\n");
    printf("=========================================\n");
    printf("Enter your annual income: ₹");
    scanf("%f", &income);
    if (income < 0)
    {
        printf("Invalid Income!\n");
        return 0;
    }
    originalincome = income;
    if (income > 2400000)
    {
        tax = tax + (income - 2400000) * 0.30;
        income = 2400000;
    }
    if (income > 2000000)
    {
        tax = tax + (income - 2000000) * 0.25;
        income = 2000000;
    }
    if (income > 1600000)
    {
        tax = tax + (income - 1600000) * 0.20;
        income = 1600000;
    }
    if (income > 1200000)
    {
        tax = tax + (income - 1200000) * 0.15;
        income = 1200000;
    }
    if (income > 800000)
    {
        tax = tax + (income - 800000) * 0.10;
        income = 800000;
    }
    if (income > 400000)
    {
        tax = tax + (income - 400000) * 0.05;
    }
    printf("\n========== RESULT ==========\n");
    printf("Annual Income : ₹%.2f\n", originalincome);
    printf("Income Tax    : ₹%.2f\n", tax);
    printf("Net Income    : ₹%.2f\n", originalincome - tax);
    printf("Thank you for using the Tax Calculator!\n");
    return 0;
}