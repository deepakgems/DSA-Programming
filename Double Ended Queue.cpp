#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
	void insertfront();
	void insertrear();
	void deletefront();
	void deleterear();
	void display();
	int front=-1,rear=-1;
	int queue[maxsize];
	int main()
{
	int choice;
	while(1)
	{
		printf("\n1)InsertFront\n 2)InsertRear\n 3)DeleteFront\n 4)DeleteRear\n 5)Display\n 6)Exit\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		switch (choice){
		case 1:
			insertfront();
			break;
		case 2:
			insertrear();
			break;
		case 3:	
			deletefront();
			break;
		case 4:	
			deleterear();
			break;
		case 5:
			display();
			break;
		case 6:
			exit(0);
			break;
			default:
			printf("Invaild choice\n");
			break;
		}
	}
}
void insertfront()
{
	int value;
	if(front==0 && rear==maxsize-1 || front==rear+1)
	{
		printf("Queue is Full\n");
		return;
	}
	if(front==-1)
	{
		front=0;
		rear=0;
	}
	else if(front==0)
	{
		front=maxsize-1;
	}
	else
	{
		front=front-1;
	}
	printf("Enter the Element:\n");
	scanf("%d",&value);
	queue[front]=value;
}
void insertrear()
{
	int value;
	if(front==0 && rear==maxsize-1 || front==rear+1)
	{
		printf("Queue is Full\n");
		return;
	}
	if(rear==-1)
	{
		front=0;
		rear=0;
	}
	else if(rear==maxsize-1)
	{
		return;
	}
	else
	{
		rear=rear+1;
	}
	printf("Enter the Element:\n");
	scanf("%d",&value);
	queue[rear]=value;
}
void deletefront()
{
	if(front==-1)
	{
		printf("Queue is Empty\n");
		return ;
	}
	printf("%d is deleted",queue[front]);
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(front==maxsize-1){
		front=0;
	}
	else{
		front=front+1;
	}
}
void deleterear()
{
	if(front==-1)
	{
		printf("Queue is Empty\n");
		return ;
	}
	printf("%d is deleted",queue[rear]);
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else if(rear==0){
		rear=maxsize-1;
	}
	else
	{
		rear=rear+1;
	}
}
void display()
{
		if(front==-1)
	{
		printf("Queue is Empty\n");
	}
	printf("Element are:");
	int i=front;
	while(i!=rear)
	{
		printf("  %d",queue[i]);
		i=(i+1)%maxsize;
	}
	printf("  %d\n",queue[rear]);
}