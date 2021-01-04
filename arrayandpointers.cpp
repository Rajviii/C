#include<stdio.h>
int main()
{
	int arr[]= {1,2,3,4,5,6,7};
	
	printf("The value at position 3 is %d\n",arr[3]);
	printf("The value at position 0 is %d\n\n",arr[0]);
	
	printf("\t Address by Pointer Arithmetic \n");
	printf("The address of 1st element of the array is %d\n",arr);
	printf("The address of 2nd element of the array is %d\n\n",arr+1);
	
	printf("\t     Address by & \n");
	printf("The address of 1st element of the array is %d\n",&arr[0]);
	printf("The address of 2nd element of the array is %d\n\n",&arr[1]);
	
	printf("\t Value by Pointer Arithmetic\n");

	printf("The valuee of 1st element of the array is %d\n",*(arr));
	return 0;
}
