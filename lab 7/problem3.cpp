#include<bits/stdc++.h>
using namespace std;
const int n=10;
int Dequeue[n];
int front=-1;
int rear=-1;

void insertRear(int element)
{
    if ((front == 0 && rear == n - 1) || (front == rear + 1))
    {
        cout<<"Deque is full."<<endl;
        return;
    }

    if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else if (rear == n - 1)
    {
        rear = 0;
    }
    else
    {
        rear = rear + 1;
    }

    Dequeue[rear] = element;
}

int main()
{
    insertRear(3);
    insertRear(4);

    return 0;
}