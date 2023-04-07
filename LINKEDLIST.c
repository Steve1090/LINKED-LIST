#include<stdio.h>
#include<stdlib.h>


void add_end(int);
struct node{
  int data;
  struct node *next; 
};

struct node *start = NULL; 
int main(){ 
struct node *newnode;
newnode=(struct node*) malloc(sizeof(struct node));
start = newnode;
newnode -> data = 20;
newnode -> next = NULL; 
add_end(30);
add_end(40);
display();
}

void add_end(int info){
    struct node *newnode, *temp;
    temp = start; 
    newnode= (struct node*) malloc (sizeof (struct node));
    newnode -> data= info;
    newnode -> next= NULL; /*CAN CHANGE THIS TO *START* FOR CIRCULAR*/
    while (temp->next!=NULL)
    temp = temp-> next;
    temp-> next= newnode; 
}
void display() { 
    struct node *temp; 
    temp = start; 
    while(temp!=NULL){ 
     printf("data=%d selfaddr=%d nextaddr= %d\n", temp-> data, temp, temp-> next);
    temp= temp-> next; 
    }
    }
