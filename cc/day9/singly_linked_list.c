#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void append(struct Node** head_ref, int new_data);
void printlist(struct Node* head);

int main() {
    struct Node* head = NULL;
    int n, element;
    
    // creating a list of n elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &element);
        append(&head, element);
    }
    
    printlist(head);
    return 0;
}

void append(struct Node **head_ref, int new_data) {
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }
    
    struct Node *current = *head_ref;
    while (current->next != NULL) {
        current = current->next;
    }
    
    current->next = new_node;
}

void printlist(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}


/*
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void append(struct Node **head_ref,int new_data);
void printlist(struct Node **head_ref);
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
    printlist(&head);

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
        (new_node)->data=new_data; 
        (*previous)->next=new_node;
        (new_node)->next=NULL;   

}



void printlist(struct Node **head_ref)
{
    struct Node **previous =head_ref;
    
    while((*previous)->next)
    {
        printf("%d->",(*previous)->data);
        (*previous)=(*previous)->next;
    }
}

/*void printlist(struct Node* head) {
    
    while (head->next != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}*/