#innclude <stdio.h>
#include <stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top=-1;

int isFull(){
    if(top==MAX-1)
        return 1;
    else
        return 0;
}
int isEmpty(){
    if(top==-1)
        return 1;
    else
        return 0;
}
void push(int data){
    if(isFull()){
        printf("Stack Overflow\n");
        return;
    }
    top=top+1;
    stack_arr[top]=data;
}
int pop(){
    int value;
    if(isEmpty()){
        printf("Stack underflow\n");
        exit(1);
    }
    value=stack_arr[top];
    top=top-1;
    return value;
}
int peek(){
    if(isEmpty()){
        printf("Stack underflow\n");
        exit(1);
    }
    return stack_arr[top];
}

