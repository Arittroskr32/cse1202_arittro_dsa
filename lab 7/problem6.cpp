#include<bits/stdc++.h>
using namespace std;
      
const int n=10;     
int Deque[n] = {1, 2, 3, 4, 5};
int front = 0;
int rear = 4;

int removeFront()
{
    if (front == -1 && rear == -1)
    {
        cout<<"Deque is empty. "<<endl;
        return -1;
    }

    int removedValue = Deque[front];

    if (front == rear)
    {
        front = rear = -1;
    }
    else if (front == n - 1)
    {
        front = 0;
    }
    else
    {
        front = front + 1;
    }

    return removedValue;
}

int main()
{
    removeFront();

    return 0;
}
