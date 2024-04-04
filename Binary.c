//CODE FOR BINARY SEARCH
#include<stdio.h>
//Function for Binary Search
int binary(int arr[],int key,int size){
int start=0;
int end=size-1;
while(start<=end){
int mid =(start+end)/2;
  if(arr[mid]==key){
    return mid;
  }
  else if(arr[mid]<key){
    mid=start+1;
  }
  else{
    mid=end-1;
  }
return -1;
}
}
int main(){
  int arr[]={1,2,3,4,5,6,7,8,9};
  int size=9;
  int key=3;
  int end=size-1;
  int index=binary(arr,key,size);
  if(index==-1){
    printf("Element is not present in the list");
  }
  else{
    printf("Element is at position number : %d",index);
  }
return 0;
}
