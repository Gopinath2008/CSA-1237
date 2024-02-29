#include<stdio.h>
void print(double num)
{
	unsigned long long*binaryrep=(unsigned long long*)&num;
	for(int i=63;i>=0;i--)
	{
		printf("%llu",(*binaryrep>>i)&1);
		if(i==63||i==23)
		{
			printf(" ");
		}
	}
	printf("\n");
}
int main()
{
	double num=1254.125;
	print(num); 
}
