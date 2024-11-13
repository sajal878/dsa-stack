// implementing stack
#include<stdio.h>
#include<stdlib.h>
#define max 10
void push(int stack[],int *top,int item){
    if(*top==max-1){
        printf("Overflow condition");
    }
    else{
        *top=*top+1;
        stack[*top]=item;
    }
}
void pop(int stack[],int *top){
    if(*top==-1){
        printf("Error: Stack is empty");
    }
    else{
        printf("The last value in the stack is %d\n",stack[*top]);
        *top=*top-1;
    }
    } 
void peek(int stack[],int *top){
    if(*top==-1){
        printf("Error: stack underflow");
    }
    else{
        printf("The top element in the stack is %d\n",stack[*top]);
    }
}
void display(int stack[],int *top){
    if(*top==-1){
        exit(0);
    }
    else{
        int temp=*top;
        for(temp=*top;temp>=0;temp--){
            printf("%d ",stack[temp]);
        }
        printf("\n");
    }
}
int main(){
    int top=-1,choice,item,*stack=(int*)malloc(max*sizeof(int));
        printf("Enter your choice \n1 for push\n2 for pop\n3 for peek\n4 for display:\n");
    do{
        printf("Enter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter item:");
            scanf("%d",&item);
            push(stack,&top,item);
            break;
            case 2:
            pop(stack,&top);
            break;
            case 3:
            peek(stack,&top);
            break;
            case 4:
            display(stack,&top);
            break;
            default:
            exit(0);
        }
    }while(1);
    return 0;
}