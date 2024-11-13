// to check stack is full or empty
// #include<stdio.h>
// #include<stdlib.h>
// struct stack{
//     int size;
//     int top;
//     int *arr;
// };
// int is_empty(struct stack *p){
//     if(p->top==-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int is_full(struct stack *s){
//     if(s->top==s->size-1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     struct stack *s;
//     s->size=80;
//     s->top=-1;
//     s->arr=(int*)malloc(s->size * sizeof(int));
//     s->arr[0]=10;
//     s->top++;
//     if(is_empty(s)){
//         printf("Stack is empty\n");
//     }
//     else{
//         printf("Stack is not empty\n");
//     }
//     if(is_full(s)){
//         printf("Stack is full\n");
//     }
//     else{
//         printf("Stack is not full\n");
//     }
//     return 0;
// }

// practice the above question 
#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int main(){
    struct stack *s;
    s->top=-1;
    s->size=80;
    s->arr=(int*)malloc(s->size*sizeof(int));
    return 0;
}


