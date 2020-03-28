// Finds the remaining balance on a loan after the first, second,
// and third monthly payment given the total loan amount, the
// loan annual interest rate, and the monthly payment.

#include <stdio.h>

#define MONTHS_PER_YEAR 12
#define TOTAL_MONTHLY_PAYMENTS 3

int main()
{
    float loan_balance, annual_interest_rate, monthly_payment,
          monthly_interest_rate;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_balance);

    printf("Enter annual interest rate: ");
    scanf("%f", &annual_interest_rate);
    annual_interest_rate /= 100;
    monthly_interest_rate = annual_interest_rate / MONTHS_PER_YEAR;

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    for(int i = 0; i < TOTAL_MONTHLY_PAYMENTS; i++)
    {
        loan_balance = loan_balance + (loan_balance * monthly_interest_rate);
        loan_balance -= monthly_payment;
        printf("Balance remaining after payment #%d: %.2f\n", i, loan_balance);
    }

    return 0;
}
