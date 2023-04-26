#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void append(struct Node **head_ref,int new_data);
int main()
{
    struct Node *head=NULL;
    int n,element;
    //creating a list of n elements
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&element);
        append(&head,element);
    }

    return 0;
}
void append(struct Node **head_ref,int new_data)
{
    struct Node **previous= head_ref;
    if(!(*head_ref))
    {
        (*head_ref) = (struct Node *)malloc(sizeof(struct Node));
        (*head_ref) -> data =new_data;
        (*head_ref) -> next = NULL;
    }
    else
        while((*previous)->next)
            (*previous)=(*previous)->next;
        struct Node *new_node=(struct Node *)malloc(sizeof(struct Node));
        (*previous)->next=new_node;
        (new_node)->data=new_data; 
        (new_node)->next=NULL;   

}