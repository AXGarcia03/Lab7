#include <stdio.h>

// Function to perform bubble sort and count swaps
int bubbleSort(int arr[], int n) {
    int totalSwaps = 0;
    for (int i = 0; i < n-1; i++) {
        int swaps = 0;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swaps++;
                totalSwaps++;
            }
        }
        printf("%d: %d\n", arr[n-i-1], swaps);
    }
    printf("total # of swaps: %d\n\n", totalSwaps);
    return totalSwaps;
}

// Function to perform selection sort and count swaps
int selectionSort(int arr[], int n) {
    int totalSwaps = 0;
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            totalSwaps++;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d: %d\n", arr[i], totalSwaps);
    }
    printf("total # of swaps: %d\n\n", totalSwaps);
    return totalSwaps;
}

int main() {
    int array1[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int array2[] = {90, 80, 70, 60, 50, 40, 30, 20, 10};
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);

    printf("array1 bubble sort:\n");
    bubbleSort(array1, n1);

    printf("array2 bubble sort:\n");
    bubbleSort(array2, n2);

    printf("array1 selection sort:\n");
    selectionSort(array1, n1);

    printf("array2 selection sort:\n");
    selectionSort(array2, n2);

    return 0;
}
