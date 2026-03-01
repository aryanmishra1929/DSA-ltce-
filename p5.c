#include <stdio.h>
#include <stdlib.h>

#define MAX 5    // Size of circular queue

int queue[MAX];
int F = -1;
int R = -1;

// Function to insert element into circular queue
void insert() {
    int num;

    if ((F == 0 && R == MAX - 1) || (R == (F - 1) % (MAX - 1))) {
        printf("\nOverload!");
        return;
    }

    printf("\nEnter value to insert: ");
    scanf("%d", &num);

    if (F == -1) {   // First element
        F = R = 0;
    }
    else if (R == MAX - 1 && F != 0) {
        R = 0;
    }
    else {
        R++;
    }

    queue[R] = num;
    printf("\nInserted -> %d", num);
}

// Function to delete element from circular queue
void delete() {
    if (F == -1) {
        printf("\nQueue is Empty!");
        return;
    }

    printf("\nDeleted -> %d", queue[F]);

    if (F == R) {   // Only one element
        F = R = -1;
    }
    else if (F == MAX - 1) {
        F = 0;
    }
    else {
        F++;
    }
}

// Function to display elements of circular queue
void display() {

    if (F == -1 && R == -1) {
        printf("\nQueue is Empty!");
        return;
    }

    printf("\nQueue elements: ");

    if (R >= F) {
        for (int i = F; i <= R; i++)
            printf("%d ", queue[i]);
    }
    else {
        for (int i = F; i < MAX; i++)
            printf("%d ", queue[i]);

        for (int i = 0; i <= R; i++)
            printf("%d ", queue[i]);
    }
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n\n--- Circular Queue Menu ---");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\nExiting...");
                exit(0);
            default:
                printf("\nInvalid choice!");
        }
    }

    return 0;
}