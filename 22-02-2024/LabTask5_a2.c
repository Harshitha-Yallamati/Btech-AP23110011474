#include<stdio.h>
#include<stdbool.h>
#define N 3

int queue[N];
int front=-1;
int rear=-1;

bool isempty()
{
    if(front==-1&&rear==-1)
        return true;
    else
        return false;
}

bool isfull()
{
    if((rear+1)%N==front)
        return true;
    else
        return false;
}

void enqueue(int x)
{
    if(isfull()==true)
    {
        printf("Overload");
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
        printf("%d is enqueued\n",queue[rear]);
    }
    else
    {
        rear=(rear+1)%N;
        queue[rear]=x;
        printf("%d is enqueued\n",queue[rear]);
    }
}
void dequeue()
{
    if(isempty()==true)
    {
        printf("Underload");
    }
    else if(front==rear)
    {
        front=rear=-1;  
        printf("%d is dequeued\n",queue[front]);
    }
    else
    {
        printf("%d is dequeued\n",queue[front]);
        front=(front+1)%N;
    }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nQueue is \n");
        while(i!=rear)
        {
            printf("%d ",queue[i]);
            i=(i+1)%N;
        }
        printf("%d",queue[rear]);
    }
}
void main()
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

