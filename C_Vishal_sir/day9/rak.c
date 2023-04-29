#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void appendList(struct Node **head_ref,int new_data)
{
    struct Node *new_node =(struct Node *)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=NULL;
    if((*head_ref)==NULL)
    {
        *head_ref=new_node;
        return;
    }
    struct Node *current = *head_ref;
    while (current->next != NULL) {
        current = current->next;
    }
    
    current->next = new_node;
}


void printlist(struct Node* head) 
{
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
   // printf("NULL\n");
}



int main()
{
    struct Node *head=NULL;
    int n,element;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&element);
        appendList(&head,element);
    }
    printlist(head);


    return 0;
}
