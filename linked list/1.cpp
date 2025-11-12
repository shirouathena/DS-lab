#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;

};


int main(){

    struct node *head; // to always point to the node_1.
    struct node *temp; // to traverse the linklist,node by node.
    struct node *new_node; // to create a NEW NODE by Allocating memory.

    int n;
    printf("enter number of nodes: ");
    scanf("%d",&n);

    head=NULL;
    for(int i=0;i<n;i++){

        new_node=(struct node*)malloc(sizeof(struct node));
        printf("enter node_%d data part: ",i+1);
        scanf("%d",&new_node->data);
        new_node->next=NULL;

        if(head==NULL){
            head=new_node;
            temp=new_node;
        }
        else{
            temp->next=new_node;//connecting node1 with node2.
            temp=new_node;
        }
    }
    //printing all nodes in the Linklist.
    printf("Linklist Nodes are->\n");
    temp=head;
    while(temp!=NULL){
        printf("|%d :%p| ",temp->data,temp->next);
        temp=temp->next;
    }

    return 0;
}
