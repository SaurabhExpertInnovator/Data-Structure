//C program to create 3 node in linked list by static method
#include<stdio.h>
struct node{
    int info;
    struct node *link;
    }n1,n2,n3;
int main(){
    n1.info=10;
    n2.info=20;
    n3.info=30;
    n1.link=&n2;
    n2.link=&n3;
    n3.link=NULL;
    struct node* start=&n1;
    printf("%d\n",n1.info);
    printf("%d\n",n2.info);
    printf("%d\n",n3.info);
    printf("%d\n",start);
    printf("%d\n",n1.link);
    printf("%d\n",n2.link);
    printf("%d\n",n3.link);
    return 0;
}
