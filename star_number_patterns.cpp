#include<stdio.h>
void star_pattern(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<i+1; j++)
		{
			printf("*");
		}
	printf("\n");
	}
}
	
void reverse_star_pattern(int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void number_pattern(int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=1; j<=i+1; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
int main()
{
	int n,input;
	printf("enter the value of rows:\n");
	scanf("%d",&n);
	printf("0.star pattern\n 1.reverse star pattern\n 2.number pattern\n");
	scanf("%d",&input);
	switch(input)
	{
		case 0:
			star_pattern(n);
			break;
			
		case 1:
			reverse_star_pattern(n);
			break;
			
		case 2:
			number_pattern(n);
			break;	
			
		default:
			printf("invalid value");
			break;	
	}
	return 0;
}
