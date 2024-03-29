#include<bits/stdc++.h>
using namespace std;
const int N=10;
int Queue[N];
int front=-1;
int rear=-1;

void insert(int item)
{
    if(rear==N-1)
    {
        printf("Queue is full!!");
        return;
    }
    if(front==-1 && rear==-1)
    {
        front=rear=0;
    }
    else 
    {
        rear++;
    }
    Queue[rear]=item;
    printf("Push success\n");
}

void display()
{
    printf("Your queue is: ");
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",Queue[i]);
    }
    printf("\n");
}

int main(){
    insert(5);
    insert(10);
    insert(15);
    insert(20);
    display();  
      
    return 0;
}