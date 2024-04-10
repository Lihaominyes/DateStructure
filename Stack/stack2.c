//Implement stack with linked list
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int date;
    struct Node* link;
};
struct Node* top = NULL;

void Push(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->date = x;
    temp->link = top; // temp points to NULL
    top = temp; // top points to *temp
}
void Pop(){
    struct Node* temp;
    if(top == NULL) return;
    temp = top; //temp points to the Node that top pointing at
    top = top->link;// top points to the next Node
    free(temp);//free the Node that temp pointing at
}

