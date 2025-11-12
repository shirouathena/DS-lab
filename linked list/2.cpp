#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *head; //Global Head Pointer.
void insert_Beg(int data){
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data; //Insert Node Data Part.

    new_node->next=head; //Connect Node_1 with 2.
    head=new_node;

}

void display_node(){
    struct node *temp;
    temp=head;
    printf("Head= %p\n",head);
    printf("Singly Linklist Nodes are->\n");

    while(temp!=NULL){
        printf("|%d :%p|  ",temp->data,temp->next);
        temp=temp->next;
    }
}


int main(){

    insert_Beg(4);
    insert_Beg(3);

    insert_Beg(2);
    insert_Beg(1);
    display_node();

    return 0;
}
