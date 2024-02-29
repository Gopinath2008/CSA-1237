#include<stdio.h>
void print(float num)
{
	unsigned int *binaryrep=(unsigned int*)&num;
	for(int i=31;i>=0;i--)
	{
		printf("%d",(*binaryrep>>i)&1);
		if(i==31||i==23)
		{
			printf(" ");
		}
	}
	printf("\n");
}
int main()
{
	float num=123.456;
	print(num);
}
