#include<stdio.h>
int front = -1,rear = -1;
int Q[50];
void enqueue(int data,int l)//Enqueue for inserting data
{
	if(rear==l-1){
		printf("Queue is full");
	}
	else if((front==-1)&&(rear==-1)){
		front = rear = 0;
		Q[rear] = data;
	}
	else
	{
		rear++;
		Q[rear] = data;
	}
}
void print()//Print function for printing the data
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("\n%d",Q[i]);
	}
}
void reverse()//reverse function for reversing the data
{
	int i,j,temp;
	for(i=front,j=rear;i<j;i++,j--){
		temp = Q[i];
		Q[i] = Q[j];
		Q[j] = temp;
	}
}
void main()
{
	int n,i=0,temp;
	printf("Enter the size of Queue");
	scanf("%d",&n);
	printf("\nEnter the data for Queue");
	while(i<n){
		scanf("%d",&temp);
		enqueue(temp,n);
		i++;
	}
	printf("\nQueue which you have entered:-");
	print();
	reverse();
	printf("\nQueue after reversing:-");
	print();

}
