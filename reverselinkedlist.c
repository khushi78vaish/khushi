#include <stdio.h>
struct node
{
    int data;
    struct node* next;
};

struct node* reverse(struct node* head)
{
    struct node *curr=head,*prev=NULL,*next;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
    }
    return prev;
}

void printlist(struct node* Node)
{
    while(Node!=NULL)
    {
        printf("%d",Node->data);
        Node=Node->next;
    }
}

struct node* createnode(int new_data)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=new_data;
    temp->next=NULL;
    return temp;
}
int main() {
	struct node* head=createnode(1);
	head->next=createnode(2);
	head->next->next=createnode(3);
	head->next->next->next=createnode(4);
	head->next->next->next->next=createnode(5);
	printlist(head);
	head=reverse(head);
	printlist(head);
	return 0;

}

