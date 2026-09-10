#include<stdio.h>
int main()
{
	int i,n,j,temp;
	printf("Enter the Array size: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter Value in Array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=n;i>0;i--){
		for(j=0;j<i-1;j++){
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("Bubble sort Result:\n");
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	return 0;
}