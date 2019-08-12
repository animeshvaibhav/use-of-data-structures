#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int val;
    struct node* link;
}linked;

linked* getnewnode(linked* root,int value){
     root = (linked*)malloc(sizeof(linked));
    root->val = value;
    root->link = NULL;
    return root;
}

linked* insert(linked* root,int value){
        if(root==NULL){
            root = getnewnode(root,value);
            return root;
        }

        else {
            root->link = insert(root->link,value);
        }
        return root;

}
linked* pop(linked* root){

        if(root==NULL)printf("queue is empty...\n");

        else {
            linked* temp = root;
            root= root->link;
            free(temp);
            temp = NULL;

        }
        return root;
}
void print(linked* root){

    while(root!=NULL){
        printf("%d->",root->val);
        root = root->link;
    }
    printf("NULL\n");
}

int main(){
        linked* front,*rear;int choice,value;
        front=rear=NULL;
    while(1){
            printf("Enter 1. for inserting a new element\nEnter 2. for popping an element\nEnter 3. for exit\nEnter 4. for displaying the values\n   ");
            scanf("%d",&choice);
    switch(choice){

    case 1: printf("enter the element you want to insert\n");
            scanf("%d",&value);
            if(front==NULL){
                rear=insert(rear,value);
                front=rear;
            }
            else{
                    rear = insert(rear,value);

            }
            break;
    case 2: front = pop(front);
            if(front== NULL)rear = front;
            break;
    case 3: exit(0);
    case 4: print(front);
            break;
    default: printf("INVALID CHOICE");break;
    }
}
    return 0;
}
