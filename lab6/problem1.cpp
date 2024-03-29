#include <stdio.h>

const int maxstk=7;
int stack[maxstk];
int top = -1;

void push(int item)
{
    if (top == maxstk - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
    printf("Push successfully\n");
}

void display(){
    printf("Stack elements:\n");
    for (int i = top; i >= 0; i--){
        printf("%d\n", stack[i]);
    }
}

int main(){
    push(10);
    push(20);
    display();

    push(30);
    display();

    return 0;
}