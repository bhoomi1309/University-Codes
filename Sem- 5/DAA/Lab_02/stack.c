#include <stdio.h>

#define SIZE 5
int stack[SIZE];
int top = -1;

void push(int n)
{
    if (top >= SIZE)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = n;
    printf("Element pushed onto the stack\n");
}

int pop()
{
    if (top == -1)
    {
        printf("Empty Stack\n");
        return -99999;
    }
    top -= 1;
    return stack[top + 1];
}

int peek()
{
    if (top == -1)
    {
        printf("Empty Stack\n");
        return -99999;
    }
    return stack[top];
}

void display()
{
    printf("\nStack: ");
    if (top == -1)
    {
        printf("Empty\n");
        return;
    }
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    printf("Stack: Menu Driven Program\n");
    int choice;
    do
    {
        printf("\nEnter your choice: \n1: Push an element\n2: Pop an element\n3: Peek the top element\n4: Display Stack\n5: Exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            int n;
            printf("Enter any number to push: ");
            scanf("%d", &n);
            push(n);
        }
        else if (choice == 2)
        {
            int val = pop();
            if (val != -99999)
            {
                printf("Element popped: %d\n", val);
            }
        }
        else if (choice == 3)
        {
            int val = peek();
            if (val != -99999)
            {
                printf("Element peeked: %d\n", val);
            }
        }
        else if (choice == 4)
        {
            display();
        }
        else if (choice == 5)
        {
            printf("Program Completed");
            break;
        }
        else
        {
            printf("Invalid Choice! Try Again\n");
        }
    } while (choice != 5);
}