//从首地址中插入元素（首插法）
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int date;
    struct Node* next;
};
//struct Node* head;//global variable, can be accessed anywhere

// void Insert(int x)     //head is global variable
// {
//     struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
//     //(*temp).date = x;
//     temp->date = x;
//     temp->next = head;
//     head = temp;
// }

struct Node* Insert(struct Node* head, int x) //Node is claimed in the main func
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));//(*temp).date = x;
    temp->date = x;
    temp->next = head;
    head = temp;
    return head;
    
}

// void Print()  // for Node is global variables
// {
//     struct Node* temp = head; //use temp to represent for the head
//     printf("List is: ");
//     while(temp != NULL)
//     {
//         printf("%d ", temp->date);
//         temp = temp->next;
//     }
//     printf("\n");
// }

void Print(struct Node* head)  // for Node is in main func
{
    
    printf("List is: ");
    while(head != NULL)
    {
        printf("%d ", head->date);
        head = head->next;
    }
    printf("\n");
}
int main()
{
    struct Node* head = NULL; // empty list
    printf("How many numbers?\n");
    int n, i, x;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the number \n");
        scanf("%d", &x);
        head = Insert(head, x);
        Print(head);
    }

}

