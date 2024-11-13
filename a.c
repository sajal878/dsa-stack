// implementing stack
#include<stdio.h>
#include<stdlib.h>
#define max 10
void enqueue(int queue[],int item,int *front,int *rear){
    if(*front==max-1){
        printf("Queue is full");
    }
    else if(*front==-1){
        *front=*rear=0;
        queue[*(rear)]=item;
    }
    else{
        queue[++(*rear)]=item;
    }
}
void dequeue(int queue[],int *front,int *rear){
    if(*front==-1){
        printf("Queue is empty");
    }
    if(*front==*rear){
        *front=*rear=-1;
    }
    else{
        printf("The value deleted from queue is %d\n",queue[*front]);
        *front=*front+1;
    }
}
void display(int queue[],int *front,int *rear){
    if(*front==-1){
        printf("queue is empty\n");
        return;
    }
    else{
        for(int i=*front;i<=*rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
int main(){
    int front=-1,rear=-1,item,choice,queue[max];
    do{
        printf("enter your choice for operation:\n1.Enqueue\n2.Dequeue\n3.display\nEnter choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the item to be inserted:");
            scanf("%d",&item);
            enqueue(queue,item,&front,&rear);
            break;
            case 2:
            dequeue(queue,&front,&rear);
            break;
            case 3:
            display(queue,&front,&rear);
            break;
            default:
            exit(0);
        }
    }while(1);
    return 0;
}