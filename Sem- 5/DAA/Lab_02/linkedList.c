#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertAtLast(int n)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = n;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        printf("Inserted\n");
        return;
    }
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("Inserted\n");
}

void deleteFromLast()
{
    if (head == NULL)
    {
        printf("Empty Linked List\n");
        return;
    }
    struct Node *temp = head;
    if (temp->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    printf("Deleted\n");
}

void display()
{
    struct Node *temp = head;
    printf("\nLinked List: ");
    if (temp == NULL)
    {
        printf("Empty\n");
        return;
    }
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    printf("Linked List: Menu Driven Program\n");
    int choice;
    do
    {
        printf("\nEnter your choice: \n1: Insert a Number\n2: Delete from Last\n3: Display List\n4: Exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            int n;
            printf("Enter any number to insert: ");
            scanf("%d", &n);
            insertAtLast(n);
        }
        else if (choice == 2)
        {
            deleteFromLast();
        }
        else if (choice == 3)
        {
            display();
        }
        else if (choice == 4)
        {
            printf("Program Completed");
            break;
        }
        else
        {
            printf("Invalid Choice! Try Again\n");
        }
    } while (choice != 4);
}