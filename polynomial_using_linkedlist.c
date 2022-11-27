#include<stdio.h>
#include<stdlib.h>
struct node{
  int coeff;
  int pow;
  struct node *next; 
};
void addition(struct node* start1,struct node* start2);
void substraction(struct node* start1,struct node* start2);
struct node* create_polynomial(struct node* start,int t);
void addatend(struct node* start,int t);

int main(){
    int choice;
    struct node* start1=NULL;
    struct node* start2=NULL;
    while(1){
	printf("\nPolynomial Operations : \n");
	printf("\t1. Addition \n");
	printf("\t2. Substraction \n");
	printf("\t3. Quit \n");
	printf("Enter the choice : ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			addition(start1,start2);
			break;
		case 2:
			substraction(start1,start2);
			break;
        case 3:
			exit(1);
	}
}
    return 0;
}
void addition(struct node* start1,struct node* start2){
    int t;
    printf("How many terms are in your Polynomial :");
    scanf("%d",&t);
    printf("Enter Polynomial-1 in the given format ( example - 2x^2+3x+4 -> 2 2 3 1 0 4)");
    start1=create_polynomial(start1,t);
    printf("Enter Polynomial-2 in the given format ( example - 2x^2+3x+4 -> 2 2 3 1 0 4)");
    start2=create_polynomial(start2,t);
}

void substraction(struct node* start1,struct node* start2){
    int t;
    printf("How many terms are in your Polynomial :");
    scanf("%d",&t);
    printf("Enter Polynomial-1 in the given format ( example - 2x^2+3x+4 -> 2 2 3 1 0 4)");
    start1=create_polynomial(start1,t);
    printf("Enter Polynomial-2 in the given format ( example - 2x^2+3x+4 -> 2 2 3 1 0 4)");
    start2=create_polynomial(start2,t);
    
}
struct node* create_polynomial(struct node* start,int t){
    struct node* temp;
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(start==NULL){
        temp=(struct node*)malloc(sizeof(struct node));
        temp->coeff=x;
        temp->pow=y;
        start=temp;
    }
    addatend(start,t);
    return start;
}
void addatend(struct node* start,int t){
    struct node* temp,*z;
    z=start;
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        temp=(struct node*)malloc(sizeof(struct node));
        temp->coeff=x;
        temp->pow=y;
        z->next=temp;
        z=temp;
        temp=temp->next;
        }
}
