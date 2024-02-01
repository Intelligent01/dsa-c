#include<stdio.h>


int size=5;
int arr[5];
int head=0;

void create_stack(){		//creating a stack
	scanf("%d",&size);
	printf("new stack created size of %d\n",size);
}
int is_empty(){				//check stack is empty
	return head==-1;
}	
int is_full(){				//check the stack is full
	return head != size-1;
}

int push(int val){					//insert value  to the stack
	if(is_full) {printf("stack is full %d\n",head);}
	else{
		head++;
		arr[head]=val;
		printf("new value %d inserte at %d\n",val,head);
	}
	return val;
}

void pop(){
	if(is_empty) 
	printf("Empty Stack !!!!..\n");
	else{
		arr[head]=0;
		head--;
		printf("stack value removed at %d\n",head);
	}
}

void peek(){
	printf("last value : %d\n",arr[head]);
}

void display(){
	for(int i=0;i<size;i++) 
	printf("[%d] --> %d \n",i,arr[i]);
}

void pr(){
	head=10;
	for(int i=0;i<size;i++) 
	printf("[] --> %d \n",head++);
}

int main(){
	// create_stack();
	printf("%d",head);
	if (0){
		printf("hello");
	}
	pop();
	push(10);
	push(20);
	push(30);
	push(10);
	push(20);
	push(30);
}
