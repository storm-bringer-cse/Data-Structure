#include<stdio.h>
int ternary_search(int ar[], int  left,int right, int key) {
    
    if(left<=right){
    int mid1= left+(right - left)/3;
    int mid2= right-(right - left)/3;
    if(ar[mid1]==key)
    {
        return mid1;
    }
    if(ar[mid2]==key){
        return mid2;
    }
    if(key<ar[mid1])
    {
        return ternary_search(ar,left,mid1-1,key);
    }
    else if(key>ar[mid2]){
        return ternary_search(ar,mid2+1,right,key);
    }
    else{
        return ternary_search(ar,mid1+1,mid2-1,key);
    }
    }
    return -1;
}
int main()
{
    int n,key;
    printf("enter the size of n :");
    scanf("%d",&n);
    int ar[n];
    printf("enter the elements");
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("enter the key :");
    scanf("%d",&key);
    int result = ternary_search(ar,0,n-1,key);
    if(result == -1){
        printf("item not found");
    }
    else {
        printf("item found");
    }
    return 0;


}
