#include<stdio.h>
#define size 5

int arr[size],front=-1,rear=-1;

int is_empty() {
    return front == -1;
}

int is_full(){
    return rear == size-1;
}

void enqueue(int val){
    if(is_full()) printf("queue is full\n");
    else{
        arr[++rear]=val;
        printf("[%d] ---> %d val\n",rear,val);
        if(is_empty()) front++;
    }
}

void dequeue(){
    if (is_empty()) printf("Queue is Empty ...\n");
    else{
        arr[front++]=0;
        printf("element removed ");
        if (front>rear)    rear=front=-1;
    }
}

void display(){
    for (int i = front; i <= rear; i++)
    {
        printf("[%d] -->> %d",i,arr[i] );
    }
    
}

int main(){
    printf("%d",is_full());
    enqueue(10);
    enqueue(15);
    enqueue(5);
    enqueue(90);
    enqueue(11);
    enqueue(13);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    
}