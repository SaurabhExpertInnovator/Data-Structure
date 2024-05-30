//Program of traversal of Linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node* link;
};
int main(){
    struct node *temp1= malloc(sizeof(struct node));
    struct node *temp2= malloc(sizeof(struct node));
    struct node *temp3= malloc(sizeof(struct node));
    struct node *temp4= malloc(sizeof(struct node));
    temp1->info=10;
    temp2->info=20;
    temp3->info=30;
    temp4->info=40;
    struct node *ptr=temp1;
    temp1->link=temp2;
    temp2->link=temp3;
    temp3->link=temp4;
    temp4->link=NULL;
    while(ptr!=NULL){
        printf("%d\n",ptr->info);
        ptr=ptr->link;
    }
}
