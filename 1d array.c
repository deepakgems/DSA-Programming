#include<stdio.h>
int main()
{
	int arr[20],size,i;
	printf("enter the size of arrray element:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
}
printf("elements of aaray\n");
     for(i=0;i<size;i++)
     {
     printf("%d ",arr[i]);
}
	return 0;
}



