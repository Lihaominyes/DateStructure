#include <stdio.h>
#include <stdlib.h>
#define Max_size 101

int A[Max_size];
int top = -1;
void Push(int x){
    if(top == Max_size - 1){
        printf("Error! Overflow\n");
        return;
    }
    A[++top] = x;
}
void Pop(){
    if(top == -1){
        printf("Error! No element to pop!\n");
        return;
    }
    top--;
}
void Print(){
    int i;
    printf("Stack: ");
    for (i = 0; i <= top; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
int main()
{
    Push(2);Print();
    Push(5);Print();
    Push(10);Print();
    Pop();Print();
    Push(12);Print();
}