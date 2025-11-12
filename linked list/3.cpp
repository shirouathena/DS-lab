//Deleting a node from the beginning of the list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head = NULL; // Global Head Pointer

// Insert at Beginning
void insert_Beg(int data){
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = data; // Insert Node Data Part

    new_node->next = head; // Connect Node_1 with 2
    head = new_node;
}

// Delete from Beginning
void delete_Beg(){
    struct node *temp;

    // Case 1: If list is empty
    if(head == NULL){
        printf("\nList is empty, nothing to delete!\n");
        return;
    }

    // Case 2: Delete the first node
    temp = head;          // Store the first node
    head = head->next;    // Move head to next node
    printf("\nDeleted node = %d\n", temp->data);
    free(temp);           // Free memory of deleted node
}

// Display Function
void display_node(){
    struct node *temp;
    temp = head;
    printf("\nHead = %p\n", head);
    printf("Singly Linked List Nodes are ->\n");

    while(temp != NULL){
        printf("|%d : %p|  ", temp->data, temp->next);
        temp = temp->next;
    }
    printf("\n");
}

// Main Function
int main(){
    insert_Beg(4);
    insert_Beg(3);
    insert_Beg(2);
    insert_Beg(1);

    printf("Initial Linked List:\n");
    display_node();

    // Delete first node
    delete_Beg();
    printf("\nList after deleting from beginning:\n");
    display_node();

    // Delete again
    delete_Beg();
    printf("\nList after another deletion:\n");
    display_node();

    return 0;
}
