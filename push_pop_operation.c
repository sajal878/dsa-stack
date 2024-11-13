// #include<stdio.h>
// #include<stdlib.h>
// struct stack{
//     int top;
//     int *arr;
//     int size;
// };
// int is_full(struct stack *s){
//     if(s->top==s->size-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }   
// }
// int is_empty(struct stack *s){
//     if(s->top==-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// void push(int value,struct stack *s){
//     if(is_full(s)){
//         printf("Stack is full");
//     }
//     else{
//         s->top++;
//         s->arr[s->top]=value;

//     }
// }
// int pop(struct stack *s){
//     if(is_empty(s)){
//         return -1;
//     }
//     else{
//         int value;
//         value=s->arr[s->top];
//         s->top--;
//         return value;
//     }
// }
// int main(){
//     struct stack *s=(struct stack*)malloc(sizeof(struct stack));
//     s->top=-1;
//     s->size=8;
//     s->arr=(int*)malloc(s->size*sizeof(int));
//     int i,value;
//     // push operation
//     for(i=0;i<s->size;i++){
//         printf("Enter value:");
//         scanf("%d",&value);
//         push(value,s);
//     }
//     // pop operation
//     printf("Popping operation\n");
//     while(!is_empty(s)){
//             printf("%d\n",pop(s));
//     }
    
//     return 0;
// }

// 
#include<stdio.h>
#include<stdlib.h>
struct stack {
    int top;
    int size;
    int *arr;
};
int is_empty(struct stack *s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int is_full(struct stack *s){
    if(s->top==s->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *s,int value){
    if(is_full(s)){
        printf("Element can not be pushed");
    }
    else{
        s->top++;
        s->arr[s->top]=value;
    }
}
int pop(struct stack *s){
    if(is_empty(s)){
        return -1;
    }
    else{
        int value=s->arr[s->top];
        s->top--;
        return value;
    }
}
int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=5;
    int value;
    s->arr=(int*)malloc(s->size*sizeof(int));
    for(int i=0;i<s->size;i++){
        printf("Pushing value in stack:");
        scanf("%d",&value);
        push(s,value);
    }
    printf("popping operation");
    while(!is_empty(s)){
        printf("%d",pop(s));
    }
    return 0;
}