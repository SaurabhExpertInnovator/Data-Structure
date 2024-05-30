//Creating the linked list node in Dynamic way
#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *link;
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
    struct node *start=temp1;
    temp1->link=temp2;
    temp2->link=temp3;
    temp3->link=temp4;
    temp4->link=NULL;
    //Printing the data stored in Linked List node
    printf("%d\n",temp1->info);
    printf("%d\n",temp2->info);
    printf("%d\n",temp3->info);
    printf("%d\n",temp4->info);
    //Printing the address stored in the temp
    printf("%d\n",start);
    printf("%d\n",temp1->link);
    printf("%d\n",temp2->link);
    printf("%d\n",temp3->link);
    printf("%d\n",temp4->link);
    //Printing the address stored in temp in 2nd way
    printf("%d\n",temp1);
    printf("%d\n",temp2);
    printf("%d\n",temp3);
    printf("%d\n",temp4);
    return 0;
}
