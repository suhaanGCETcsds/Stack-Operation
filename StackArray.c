#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push() {
    int value;

    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }

    printf("Enter value to push: ");
    scanf("%d", &value);

    top++;
    stack[top] = value;

    printf("%d pushed into the stack.\n", value);
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow!\n");
        return;
    }

    printf("%d popped from the stack.\n", stack[top]);
    top--;
}

void display() {
    int i;

    if (top == -1) {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack elements:\n");

    for (i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Program exited.\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}