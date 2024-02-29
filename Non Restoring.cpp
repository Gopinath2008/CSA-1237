#include <stdio.h>
void nonRestoringDivision(int dividend, int divisor)
{
    int quotient = 0;
    int remainder = 0;
    printf("Non-Restoring Division Steps:\n");
    for (int i=31;i>=0;i--)
	{
        remainder=(remainder<<1)|((dividend>>i) & 1);
        printf("\nStep %2d: ",32-i);
        printf("Dividend: %d, Remainder: %d, Quotient: %d, Divisor: %d", dividend, remainder, quotient, divisor);
        if (remainder >= 0)
		{
            remainder -= divisor;
            quotient = (quotient << 1) | 1;
        }
		else
		{
            remainder += divisor;
            quotient = quotient << 1;
        }
    }
    printf("\n\nFinal Result:\n");
	printf("Quotient: %u, Remainder: %d\n", quotient, remainder);
}
int main()
{
    int dividend, divisor;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);
    nonRestoringDivision(dividend, divisor);
}

