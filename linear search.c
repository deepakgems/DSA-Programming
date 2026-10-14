#include<stdio.h>
int main()
{
	int item,i=0;
	int arr[5]={34,56,32,78,12};
	printf("enter the Linear Searching Item: ");
	scanf("%d",&item);
	while(i<5){
		if(arr[i]==item){
			printf("Item Found at %d :",i);
			exit(0);
		}
		i++;
	}
	if(i>=5){
		printf("Item Not Found at");
		exit(0);
	}
	return 0;
}