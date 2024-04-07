// 在任意位置中插入元素
#include <iostream>
using namespace std;

struct Node
{
    int date;
    Node* next;
};
Node* head;
void Insert(int date, int n) //insert in anywhere
{
    Node* temp1= new Node();
    temp1->date = date;
    temp1->next = NULL;
    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
        return; 
    }
    Node* temp2 = head;
    for(int i = 0; i < n-2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;

}
void Print()
{
    Node* temp = head;
    while(temp != NULL)
    {
        printf("%d", temp->date);
        temp = temp->next;
    }
}
int main(void)
{
    head = NULL;
    Insert(2,1);// 2
    Insert(3,2);// 2 3
    Insert(4,1);// 4 2 3
    Insert(5,2);// 4 5 2 3
    Print(); 
}
