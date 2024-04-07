//反转一个链表 （reverse）（迭代反转）
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int date;
    struct Node* next;
};

struct Node* Reverse(struct Node* head)
{
    struct Node *next, *prev, *current;
    current = head;
    prev = NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;//reverse
        prev = current;//move prev to current
        current = next;//move current to next
    }
    head = prev;
    return head;//if(head in global),则跳过这一步
}

void Print(struct Node* head)
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        printf("%d", temp->date);
        temp = temp->next;
    }
    printf("\n");
}
struct Node* Insert(struct Noed* head, int date)//首插法
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));//(*temp).date = x;
    temp->date = date;
    temp->next = head;
    head = temp;
    return head;
}
int main()
{
    struct Node* head =NULL;
    head = Insert(head,2);
    head = Insert(head,4);
    head = Insert(head,6);
    head = Insert(head,8);
    Print(head);
    head = Reverse(head);
    Print(head);
}