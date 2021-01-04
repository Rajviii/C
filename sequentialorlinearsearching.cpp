#include<stdio.h>
#define N 5
int main()
{
	int a[N];
	int ch;
	printf("enter the values for Array\n");
	for(int i=0; i<N; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter your Number: \n");
	scanf("%d",&ch);
	for(int i=0; i<N; i++)
	{
		if(ch==a[i])
		{
			printf("This is your Number %d at %d place",ch,i);
			break;
		}
		else
			continue;
	}
	return 0;
}
