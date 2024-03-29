#include<bits/stdc++.h>
using namespace std;
      
const int n=10;     
int Deque[n];
int front = -1;
int rear = -1;

void insertFront(int element)
{
    if ((front == 0 && rear == n- 1) || (front == rear + 1))
    {
        cout<<"Deque is full."<<endl;
        return;
    }

    if (front == -1 && rear == -1)
    {
        front = rear = 0;
    }
    else if (front == 0)
    {
        front = n- 1;
    }
    else
    {
        front = front - 1;
    }

    Deque[front] = element;
}

int main()
{
    insertFront(2);
    insertFront(1);

    return 0;
}
