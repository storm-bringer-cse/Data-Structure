#include<stdio.h>
int binarysearch(int arr[],int size,int target){
int beg=0,mid,end=size-1;
while(beg<=end){
    mid=(beg + end)/2;
    if(arr[mid]==target){
      return mid;
    }
    else if(arr[mid]>target){
        end = mid -1;
    }
    else if(arr[mid]<target){
        beg = mid + 1;
    }

}
return -1;
}
int main(){
    int arr[100],i,result,size,target;
    printf("Enter size :");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf(" Enter target :");
    scanf("%d",&target);
    result = binarysearch(arr,size,target);
    if(result != -1){
        printf("Item found");
    }
    else {
    printf("Item not  Found");
    }
    return 0;

}
// This Programme is Solved By Ridwan Ahmed{315241092}

