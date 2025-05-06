#include<stdio.h>
int main() {
   int arr[100],size,target,i,found;
   printf("Enter size :");
   scanf("%d",&size);
   for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
   } 
   printf("enter target value :");
   scanf("%d",&target);
   for(i=0;i<size;i++){
    if(arr[i]==target){
        found = 1;
        break;
    }
   }
   if(found==1){
    printf("Item Found");
   }
   else{
    printf("Item not found");
   }

    return 0;
}