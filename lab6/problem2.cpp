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

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    top=top-1;
    printf("Pop successfully\n");
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
    push(30);
    push(40);
    push(50);
    display();
    pop();
    pop();
    display();

    return 0;
}