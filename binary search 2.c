#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int lr=0,up=4,mid,item,f=0;
	printf("Enter Searching item :");
	scanf("%d",&item);
	while(lr<=up)
	{
		mid=(lr+up)/2;
		if(arr[mid]==item){
			f=1;
			break;
		}
		if(arr[mid]<item){
			lr=mid+1;
		}
		else
		{
			up=mid-1;
		}
	}
	if(f==1){
		 printf("Item Found at %d",mid);
	}
	else
	{
		printf("Item Not Found");
	}
	return 0;
}