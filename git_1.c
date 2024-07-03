#include<stdio.h>

int main()
{
	int i , a[10];
	int sum;
	printf("enter the elements : \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	} 
	printf("the elements are : \n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	} 
}
