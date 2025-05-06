// sum and average of an array
#include<stdio.h>
int main() {
   int n;
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   int sum=0;
   float avg=0;
   for(int i=0;i<n;i++){
    sum=sum+a[i];
    
   }
   avg=sum/n;
    printf("%d\n",sum);
    printf("%f\n",avg);
   
    return 0;
}