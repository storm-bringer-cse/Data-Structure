#include<stdio.h>

int binarysearch(int ar[], int size, int target) {
    int beg = 0, end = size - 1, mid;
    while (beg <= end) {
        mid = beg + (end - beg) / 2;

        if (ar[mid] == target) {
            return mid;
        }
        else if (ar[mid] > target) {
            end = mid - 1;
        }
        else {
            beg = mid + 1;
        }
    }
    return -1;
}

int main() {
    int ar[100], size, target, result;
    printf("Enter size: ");
    scanf("%d", &size);

  
    for (int i = 0; i < size; i++) {
        scanf("%d", &ar[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    result = binarysearch(ar, size, target);

    if (result != -1) {
        printf("Item found" );
    }
    else {
        printf("Item not found!");
    }
    return 0;
}





   
