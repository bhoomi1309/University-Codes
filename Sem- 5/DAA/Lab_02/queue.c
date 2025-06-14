#include<stdio.h>

#define SIZE 5
int queue[SIZE];
int f=-1;
int r=-1;

void poll(int n){
    if(r>=SIZE){
        printf("Queue Overflow\n");
        return;
    }
    if(f==-1){
        f=0;
    }
    queue[++r]=n;
    printf("Inserted\n");
}

int deque(){
    if(f==-1){
        printf("Empty Queue\n");
        return -9999;
    }
    int removedElement = queue[f];
    if(f==r){
        f=-1;
        r=-1;
        return removedElement;
    }
    f++;
    return removedElement;
}

void display(){
    printf("\nQueue: ");
    if(r==-1 || f>r){
        printf("Empty\n");
        return;
    }
    int i;
    for(i=f;i<=r;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main(){
    printf("Queue: Menu Driven Program\n");
    int choice;
    do
    {
        printf("\nEnter your choice: \n1: Add an element\n2: Remove an element\n3: Display Queue\n4: Exit\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            int n;
            printf("Enter any number to add: ");
            scanf("%d", &n);
            poll(n);
        }
        else if (choice == 2)
        {
            int val = deque();
            if (val != -9999)
            {
                printf("Element removed: %d\n", val);
            }
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
    } while (choice != 5);
}