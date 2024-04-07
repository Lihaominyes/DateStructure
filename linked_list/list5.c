//print the linked list and reversen a linked list(递归·)
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int date;
    struct Node* next;
};
struct Node* head;
void Reverse(struct Node* p){//递归反转
    if (p->next == NULL)
    {
        head = p;
        return;
    }     
    Reverse(p->next);
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;
}
void Print(struct Node* head){ //打印
    if (head == NULL)
    {
        printf("\n");
        return;
    } 
    printf("%d ", head->date);
    Print(head->next);
}
void ReversePrint(struct Node* head){//反转打印
    if (head == NULL)
    {
        printf("\n");
        return;
    } 
    ReversePrint(head->next);
    printf("%d ", head->date);
    
}

struct Node* Insert(struct Node* head, int date)//首插法
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));//(*temp).date = x;
    temp->date = date;
    temp->next = head;
    head = temp;
    return head;
}
int main()
{
    struct Node* head = NULL; // empty list
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);
    Print(head);
    ReversePrint(head);
}