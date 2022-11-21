//-------------STACK USING ARRAY---------------
#include<stdio.h>
#include<stdlib.h>
int stack[100],top=-1,n;
void create(){
    printf("Enter the size of the stack : ");
    scanf("%d",&n);
}
int push(int top){
    int s,t;
    printf("How many elements You want to push :");
    scanf("%d",&s);
    t=top+s;
    for(int i=top+1;i<=t;i++){
     if(i>=n){
	    printf(" Stack Overflow !");
	    break;
	 }else{
	    top++;
	    printf("Enter value : ");
	    scanf("%d",&stack[i]);
	}
    }
	return top;
}
int pop(int top){
    if(top<=-1){
        printf("Stack Underflow");
    }else{
        top--;
    }
	return top;
}
void peek(int top){
	printf("\n Top element of Stack is : %d \n ",stack[top]);
}
void display(int top){
    if(top==-1){
        printf("Stack is empty !");
    }else{
        printf("Stack : ");
	for(int i=0;i<=top;i++){
	    printf("%d,",stack[i]);
	}
	printf("\n\n");
    }
}
int main(){
    int c;
	
	while(1){
	    printf("-----------------STACK----------------\n");
	    printf("\n ~Choose Operation -\n");
	    printf("\n 1.Create Stack ");
	    printf("\n 2.Push ");
	    printf("\n 3.Pop ");
	    printf("\n 4.Peek ");
	    printf("\n 5.Display ");
	    printf("\n 6.Quit \n");
	
	    printf("\n Enter Your Choice : ");
	    scanf("%d",&c);
		switch(c){
		    
		case 1: create();
		        break;
	
		case 2: top=push(top);
		        break;
		case 3: top=pop(top);
		        break;
		case 4: peek(top);
		        break;
		case 5: display(top);
		        break;
		case 6: exit(1);
		        break;
		        
		default: printf("Enter correct choice !");
	}
	}
  return 0;
}
