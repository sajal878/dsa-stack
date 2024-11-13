// #include<stdio.h>
// #include<stdlib.h>
// struct stack {
//     int *arr;
//     int top;
//     int size;
// };
// int isempty(struct stack *s){
//     if(s->top==-1){
//         return 1;
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
//         printf("Value can't be pushed, stack has been overflow\n");
//     }else{
//         s->top++;
//         s->arr[s->top]=data;
//     }
// }
// int peek(struct stack *s,int i){
//     if(s->top-i+1<0  ){
//         printf("Not a valid position");
//         return -1;
//     }else{
//         return s->arr[s->top-i+1];
//     }
// }
// int pop(struct stack *s){
//     if(isempty(s)){
//         printf("Value can't be popped, stack is empty\n");
//         return -1;
//     }else{
//         int value=s->arr[s->top];
//         s->top--;
//         return value;
//     }
// }
// void display(struct stack *s){
//     if(isempty(s)){
//         printf("No value to be displayed in the stack as it is empty\n");
//     }else{
//         for(int i=s->top;i>=0;i--){
//         printf("Element in the stack: %d\n",s->arr[i]);
//     }
// }
// }
// int stacktop(struct stack *s){
//     return s->arr[s->top];
// }
// int stackbottom(struct stack *s){
//     return s->arr[0];
// }
// int main(){
//     struct stack *s=(struct stack*)malloc(sizeof(struct stack));
//     s->top=-1;
//     s->size=7;
//     s->arr=(int*)malloc(sizeof(int)*s->size);
//     int i,data;
//     for(i=0;i<s->size;i++){
//         printf("Enter the data to be pushed in a stack:");
//         scanf("%d",&data);
//         push(s,data);
//     }
//     display(s);
//     // while(!isempty(s)){
//     //     printf("Popped element from the stack is %d\n",pop(s));
//     // }
//     // display(s);
//     // for(i=1;i<=s->top+1;i++){
//     // printf("The value at %d is %d\n",i,peek(s,i)); 
//     // }
//     // to access topmost element of the stack
//     printf("The topmost element of the stack is %d\n",stacktop(s));
//     printf("The bottommost element of the stack is %d ",stackbottom(s));
//     free(s->arr);
//     free(s);
//     return 0;
// }

// practicing all operation in stack
#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isfull(struct stack *s){
if(s->top==s->size-1){
    return 1;
}else{
    return 0;
}
}
int isempty(struct stack *s){
    if(s->top==-1){
        return 1;
    }else{
        return 0;
    }
}
void push(struct stack *s,int data){
    if(isfull(s)){
        printf("Stack is full,value can not be pushed\n");
    }else{
    s->top++;
    s->arr[s->top]=data;
    }
}
int pop(struct stack *s){
    if(isempty(s)){
        printf("Stack is empty,value can not be popped\n");
    }else{
        int value=s->arr[s->top];
        s->top--;
        return value;
    }
}
void display(struct stack *s){
    if(s->top==-1){
        printf("Stack is empty\n");
    }
    else{
        for(int i=s->top;i>=0;i--){
            printf("Value in the stack is %d\n",s->arr[i]);
        }
        printf("\n");
    }
}
int stacktop(struct stack *s){
    return s->arr[s->top];
}
int stackbottom(struct stack *s){
    return s->arr[0];
}

int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=8;
    s->arr=(int*)malloc(s->size*sizeof(int));
    int i,data;
    // push operation in stack
    for(i=0;i<s->size;i++){
        printf("Enter data to be pushed into stack:");
        scanf("%d",&data);
        push(s,data);
    }
    display(s);
    printf("The value at the top of the stack is %d\n",stacktop(s));
    printf("The value at the bottom of the stack is %d\n",stackbottom(s));
    while(!isempty(s)){
        printf("Value to be popped is %d\n" ,pop(s));
    }
    display(s);
    return 0;
}