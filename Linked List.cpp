#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL; 
void insert(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
void deleteNode(int val) {
    struct Node *temp = head, *prev = NULL;
    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }
    if (temp->data == val) {
        head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != val) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in the list.\n", val);
        return;
    }
    prev->next = temp->next;
    free(temp);
}
void search(int val) {
    struct Node* temp = head;
    int pos = 0;
    while (temp != NULL) {
        if (temp->data == val) {
            printf("Value %d found at position %d\n", val, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Value %d not found in the list.\n", val);
}
void display() {
    struct Node* temp = head;

    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insert(5);
    insert(10);
    insert(15);
    display();  
    deleteNode(10);
    display();  
    search(15); 
    search(20); 
    return 0;
}
