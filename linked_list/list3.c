//在任意位置删除元素
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int date;
    struct Node* next;
};
struct Node* head;

void Delete(int n)
{
    struct Node* temp1 = head;
    if (n==1)
    {
        head = temp1->next;// or head = head->next
        free(temp1);
        return;
    }
    for (int i = 0; i < n-2; i++)
    {
        temp1 = temp1->next;
    }
    struct Node* temp2 = temp1->next; //temp2 points to the target
    temp1->next = temp2->next;
    free(temp2);
}

void Insert(int date, int n)
{
    struct Node* temp1= (struct Node*)malloc(sizeof(struct Node));
    temp1->date = date;
    temp1->next = NULL;
    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
        return; 
    }
    struct Node* temp2 = head;
    for(int i = 0; i < n-2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;

}
void Print()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        printf("%d", temp->date);
        temp = temp->next;
    }
    printf("\n");
}
int main(void)
{
    head = NULL;
    Insert(2,1);// 2
    Insert(3,2);// 2 3
    Insert(4,1);// 4 2 3
    Insert(5,2);// 4 5 2 3
    Print(); 
    Delete(2);
    Print();
}