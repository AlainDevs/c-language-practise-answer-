// bubble sort with flag
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

void bubble_sort(int a[], int n) {
    int i, j, temp, flag;
    for (i = 0; i < n - 1; i++) {
        flag = 0;
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                flag = 1;
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        if (!flag) break;
    }
}

int main(void) {
    int a[MAX], i;
    srand(time(NULL));
    for (i = 0; i < MAX; i++) {
        a[i] = rand() % 100;
        printf("%d ", a[i]);
    }
    printf("\n");
    bubble_sort(a, MAX);
    for (i = 0; i < MAX; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
