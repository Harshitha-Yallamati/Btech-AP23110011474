#include<stdio.h>
#include<stdbool.h>
#define N 100
int queue[N],rear=-1,front=-1;
bool isfull()
{
	if(rear==N)
	    return true;
	else
	    return false;
}
bool isempty()
{
	if(front==-1&&rear==-1)
	    return true;
	else
	    return false;
}
void enqueue(int x)
{
	if(front==-1&&rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
		printf("%d is enqueued into the queue. \n",x);
	}
	else if(isfull()==true)
	{
		printf("Overflow");
	}
	else
	{
		rear++;
		queue[rear]=x;
		printf("%d is enqueued into the queue. \n",x);
	}
	
}
void dequeue()
{
	int y;
	if(isempty()==true)
	{
		printf("Underflow");
	}
	else
	{
		y=queue[front];
		printf("%d is dequeued from the queue. \n",y);
		front--;
		return y;
	}
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		printf("\nQueue is \n");
		for(i=front;i<rear;i++)
		{
			printf("%d ",queue[i]);
		}
		printf("%d",queue[rear]);
	}
}
int main()
{
	isfull();
	isempty();
	enqueue(3);
	enqueue(1);
	enqueue(11);
	dequeue();
	enqueue(10);
	display();
}
