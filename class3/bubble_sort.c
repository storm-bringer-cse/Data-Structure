#include <stdio.h>
void bubblesort(int arr[], int size) {
    int i,j,temp;
for (int i = 0; i<size;i++) {
        for (int j= 0; j< size -i-1; j++) {
            
            if (arr[j] > arr[j + 1]) {
                 temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(){
    int arr[100],size,i;
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("enter elemnets :");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr, size);
    printf("sorted list :");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

