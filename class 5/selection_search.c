// This Programme is Solved By Ridwan Ahmed{315241092}
#include <stdio.h>
#include <stdlib.h>

void selection_sort(int *a, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;
        for (int j = i + 1; j < size; j++) {
            if (a[j] < a[min]) min = j;
        }
        if (min != i) {
            int tmp = a[min];
            a[min] = a[i];
            a[i] = tmp;
        }
    }
}

void printarray(int *a, int size) {
    printf("Sorted list: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(void) {
    int size;
    printf("Enter size: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        fprintf(stderr, "Invalid size\n");
        return 1;
    }

    int *a = malloc(size * sizeof *a);
    if (!a) { perror("malloc"); return 1; }

    printf("Enter elements: ");
    for (int i = 0; i < size; i++) {
        if (scanf("%d", &a[i]) != 1) {
            fprintf(stderr, "Invalid input\n");
            free(a);
            return 1;
        }
    }

    selection_sort(a, size);
    printarray(a, size);

    free(a);
    return 0;
}

