// use stack to reverse a string or linked list
#include <iostream>
#include <stack> //stack from standard template library(STL)
using namespace std;
void Reverse(char *C, int n){
    stack<char> S;
    //loop for push
    for (int i = 0; i < n; i++){
        S.push(C[i]);
    }
    //loop for pop
    for (int i = 0; i < n; i++){
        C[i] = S.top(); // overwrite the character at index 1
        S.pop(); // perform pop
    }
}
int main()
{
    char C[51];
    printf("Enter a string: ");
    gets(C);// 用于接收字符串 like "scanf"
    Reverse(C, strlen(C));
    printf("Output is %s\n", C);
}
