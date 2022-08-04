#include <stdio.h>

#define n 3

int queue[n],front=-1,rear=-1;

void enqueue();
void dequeue();
void display();
void fVal();
void lVal();
void peekPos();
int isEmpty();
int isFull();

void main(){
    int choice =0;
    while(choice!=7){
        printf("Enter the operation you want to perform\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Front\n5.Rear\n6.Get element\n7.Quit\n");
        scanf("%d",&choice);
        if(choice == 1){
            enqueue();
        }else if(choice == 2){
            dequeue();
        }else if(choice == 3){
            display();
        }else if(choice == 4){
               fVal();
        }else if(choice == 5){
                lVal();
        }else if(choice == 6){
                peekPos();
        }
    }
    
    printf("End of Queue operations\n");
}

int isFull(){
    if(rear==n-1){
        return 1;
    }else{
        return 0;
    }
}
int isEmpty(){
    if(front==rear){
        return 1;
    }else{
        return 0;
    }
}
void enqueue(){
    if(isFull()){
        printf("Queue is Full!\n");
    }else{
        int hold;
        printf("Enter the element to insert\n");
        scanf("%d",&hold);
        front = 0;
        rear++;
        queue[rear] = hold;
    }
}
void dequeue(){
    if(isEmpty()){
        printf("Queue is Empty!\n");
    }else{
        printf("The element removed is %d\n",queue[front]);
        front++;
        if(front>rear){
            front=rear=-1;
        }
       
    }
}
void display(){
    if(isEmpty()){
        printf("Queue is Empty!\n");
    }else{
        printf("The queue elements are\n");
        for(int i = front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
    }
}
void peekPos(){
    if(isEmpty()){
        printf("Queue is Empty!\n");
    }else{
        int hold;
        printf("Enter the index\n");
        scanf("%d",&hold);
        printf("The value at %d is %d\n",hold,queue[hold]);
    }
}
void fVal(){
    if(isEmpty()){
        printf("Queue is Empty!\n");
    }else{
        printf("Front = %d\n",queue[front]);
    }
}
void lVal(){
    if(isEmpty()){
        printf("Queue is Empty!\n");
    }else{
        printf("Rear = %d\n",queue[rear]);
    }
}