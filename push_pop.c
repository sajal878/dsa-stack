// #include<stdio.h>
// #include<stdlib.h>
// struct stack{
//     int size;
//     int top;
//     int *arr;
// };
// int isempty(struct stack *s){
//     if(s->top==-1){
//         return -1;
//     }else{
//         return 0;
//     }
// }
// int isfull(struct stack *s){
//     if(s->top==s->size-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void push(struct stack *s,int data){
//     if(isfull(s)){
//         printf("Stack overflow\n");
//     }else{
//         s->top++;
//         s->arr[s->top]=data;
//     }
// }
// int pop(struct stack *s){
//     if(isempty(s)){
//         printf("Stack underflow\n");
//         return -1;
//     }else{
//         int value=s->top;
//         s->top--;
//         return s->arr[value];
//     }
// }
// void display(struct stack *s){
//     if(isempty(s)){
//         printf("Stack is empty");
//     }
//     else{
//         printf("Element in a stack are:\n");
//         for (int i=s->top;i>=0;i--){
//         printf("%d\n",s->arr[i]);
//     }
// }
// }
// int main(){
//     struct stack *s=(struct stack*)malloc(sizeof(struct stack));
//     s->size=8;
//     s->top=-1;
//     s->arr=(int*)malloc(sizeof(int)*s->size);
//         int data;
//     for(int i=0;i<s->size;i++){
//         printf("Enter data to be pushed into stack:");
//         scanf("%d",&data);
//         push(s,data);
//         // printf("\n");
//     }
//     //  push(s,data);
//     display(s);
//     while(!isempty(s)){
//         printf("The element to be popped is %d\n",pop(s));
//     }
//     display(s);
//     return 0;
// }

// performing push and pop operation in a stack in array
#include<stdio.h>
#include<stdlib.h>
struct stack {
    int *arr;
    int top;
    int size;
};
int isempty(struct stack *s){
    if(s->top==-1){
        return 1;
    }else{
        return 0;
    }
}
int isfull(struct stack *s){
    if(s->top==s->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *s,int data){
    if(isfull(s)){
        printf("Value can't be pushed, stack has been overflow\n");
    }else{
        s->top++;
        s->arr[s->top]=data;
    }
}
int pop(struct stack *s){
    if(isempty(s)){
        printf("Value can't be popped, stack is empty\n");
        return -1;
    }else{
        int value=s->arr[s->top];
        s->top--;
        return value;
    }
}
void display(struct stack *s){
    if(isempty(s)){
        printf("No value to be displayed in the stack as it is empty\n");
    }else{
        for(int i=s->top;i>=0;i--){
        printf("Element in the stack: %d\n",s->arr[i]);
    }
}
}
int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=7;
    s->arr=(int*)malloc(sizeof(int)*s->size);
    int i,data;
    for(i=0;i<s->size;i++){
        printf("Enter the data to be pushed in a stack:");
        scanf("%d",&data);
        push(s,data);
    }
    display(s);
    while(!isempty(s)){
        printf("Popped element from the stack is %d\n",pop(s));
    }
    display(s);
    free(s->arr);
    free(s);
    return 0;
}