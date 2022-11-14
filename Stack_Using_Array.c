//-------------STACK USING ARRAY---------------
#include<stdio.h>
#include<stdlib.h>
void push(int stack[],int n,int top){
    int s,t;
    printf("How many elements You want to push :");
    scanf("%d",&s);
    t=top+s;
    for(int i=top+1;i<t;i++){
     if(i>=n){
	    printf(" Stack Overflow !");
	    break;
	 }else{
	    top++;
	    scanf("%d",&stack[i]);
	}
    }
	
}
void pop(int stack[],int n,int top){
    if(top<=-1){
        printf("Stack Underflow");
    }else{
        top--;
    }
	
}
void peek(int stack[],int n,int top){
	printf("Top element of Stack is : %d",stack[top]);
}
void display(int stack[],int n,int top){
	for(int i=0;i<top;i++){
	    printf("%d \n",stack[i]);
	}
}
int main(){
    int c,n;
	printf("-----------------STACK----------------");
	printf("\n --------Creating Stack--------  \n");
	printf("Enter the size of stack :");
	scanf("%d",&n);
	int stack[n],top=-1;
	printf("\n ~Choose Operation -\n");
	printf("\n 1.Push ");
	printf("\n 2.Pop ");
	printf("\n 3.Peek ");
	printf("\n 4.Display ");
	printf("\n 5.Quit \n");
	printf("\n Enter Your Choice : ");
	scanf("%d",&c);

	while(1){
		switch(c){
	
		case 1: push(stack[],n,top);
		        break;
		case 2: pop(stack[],n,top);
		        break;
		case 3: peek(stack[],n,top);
		        break;
		case 4: display(stack[],n,top);
		        break;
		case 5: exit(1);
		        break;
		        
		default: break;
	}
	}
  return 0;
}
