#include<bits/stdc++.h>
using namespace std;    
      
const int n=10;     
int Deque[n];
int front = -1;
int rear = -1;

int removeRear()
{
    if (front == -1 && rear == -1)
    {
        cout<<"Deque is empty."<<endl;
        return -1;
    }
    int removedValue = Deque[rear];

    if (front == rear)
    {
        front = rear = -1;
    }
    else if (rear == 0)
    {
        rear = n - 1;
    }
    else
    {
        rear = rear - 1;
    }

    return removedValue;
}

int main()
{
    removeRear();

    return 0;
}
