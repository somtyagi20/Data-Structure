#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* top=NULL;
struct node* push(struct node* top,int val){
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=val;
	if(top==NULL){
		temp->next=NULL;
		top=temp;
	}
	else{
		temp->next=top;
		top=temp;
	}
	return top;
}
void print(struct node* top){
	struct node* p;
	p=top;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}

struct node* pop(struct node* top){
	struct node* temp;
	if(top==NULL){
		printf("\nStack Underflow !!!\n");
	}
	else{
		temp=top;
		top=top->next;
		free(temp);
	}
	return top;
}

void peek(struct node* top){
	printf("\nTop Value : %d\n",top->data);
}

int main(){
	int c,v;
	while(1){
	printf("\n-------------STACK USING LINKED LIST---------------\n");
	printf("\n Choose Operation -\n");
	printf("\n 1.Push \n");
	printf("\n 2.Pop \n");
	printf("\n 3.Peek \n");
	printf("\n 4.Display \n");
	printf("\n 5.Quit \n");
	printf("\n Enter Your Choice : ");
	scanf("%d",&c);
		switch(c){
			case 1:
				printf(" Enter value : ");
				scanf("%d",&v);
				top=push(top,v);
		        break;
			case 2: 
				top=pop(top);
		        break;
			case 3: 
				peek(top);
		        break;
			case 4: 
				print(top);
		        break;
			case 5: 
				exit(1);
	}
	}
	return 0;
}
