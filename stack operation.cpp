#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int value){
    if(top == SIZE - 1){
        printf("Stack Overflow!!\n");
    } else {
        stack[++top] = value;
        printf("%d pushed into stack.\n", value);
    }
}

void pop(){
    if(top == -1){
        printf("Stack Underflow!!\n");
    } else {
        printf("%d popped from stack.\n", stack[top--]);
    }
}

void peek(){
    if(top == -1){
        printf("Stack is Empty!!\n");
    } else {
        printf("Top Element is: %d\n", stack[top]);
    }
}

void display(){
    if(top == -1){
        printf("Stack is Empty!!\n");
    } else {
        printf("Stack elements are:\n");
        for(int i = top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
    }
}

int main(){
    int choice, value;
    while(1){
        printf("\n--- Start Menu ---\n");
        printf("1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                printf("Enter value to PUSH: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid Input!!\n");
        }
    }
    return 0;
}
