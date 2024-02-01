#include<stdio.h>
#include<stdlib.h>

#define MAX 10

struct stack{
	int arr[MAX];
	int top;
};

typedef struct stack st;


void create_stack(st *s){
	s->top=-1;
	printf("new stack created");
}

int is_empty(st *s){
	return s->top==-1;
}

int is_full(st *s){
	return s->top==MAX-1;
}
int push(st *s,int val){					//insert value  to the stack
	if(is_full(s)) printf("stack is full \n");
	else{
		s->arr[++s->top]=val;
		printf("new value %d inserte at %d\n",val,s->top);
	}
	return val;
}

void  pop(st *s){
	if(is_empty(s)) printf("Empty Stack");
	else{
		printf("%d element removed\n",s->arr[s->top]);
		s->arr[s->top--]=0;
	}
}

void display(st *s){
	for (int i = 0; i <= s->top; i++)	printf("[%d] in %d\n",i,s->arr[i]);
	
}

int main(){
	st *a=malloc(sizeof(st));
	printf("%d\n",MAX);
	create_stack(a);
	push(a,20);
	push(a,30);
	push(a,40);
	display(a);
	pop(a);
	pop(a);
	pop(a);
	pop(a);

}