#include <stdio.h>
int boothMultiplication(int multiplier, int multiplicand)
{
    int product = 0;
    while (multiplier != 0)
	{
        if (multiplier & 1)
		{
            product += multiplicand;
        }
        multiplier >>= 1;
        multiplicand <<= 1;
    }
    return product;
}
int main() {
    int multiplier, multiplicand;
    printf("Enter multiplier: ");
    scanf("%d", &multiplier);
    printf("Enter multiplicand: ");
    scanf("%d", &multiplicand);
    int product = boothMultiplication(multiplier, multiplicand);
    printf("Product: %d\n", product);
    return 0;
}
