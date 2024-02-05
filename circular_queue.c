#include<stdio.h>
#define size 5
int arr[size],front=-1,rear=-1;

int is_full(){
    return (front==rear+1)||(front==0 && rear==size-1);
}

int is_empty(){
    return front==-1;
}

void enqueue(int val){
    if (is_full()) printf("queue is full\n");
    else{
        if (front==-1) front=0;
        rear=(rear+1)%size;
        arr[rear]=val;
        printf("[%d] -->> %d\n",rear,arr[rear]);
    }
}

void dequeue(){
    if (is_empty()) printf("Empty Queue !!...");
    else{
        int element=arr[front];
        printf("%d <<-- [%d]\n",element,front);
        arr[front]=0;
        if(front==rear) front=rear=-1;
        else front=(front+1)%size;
    }    
}

void display(){
    for (int i = front; i != rear; i=(i+1)%size) printf("[%d] ----- %d \n",i,arr[i]);
    printf("[%d] ----- %d \n",rear,arr[rear]);
}

int main(){
    // printf("%d",is_empty());
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    dequeue();
    enqueue(60);
    enqueue(70);
    enqueue(80);
    enqueue(90);
    display();
    
}