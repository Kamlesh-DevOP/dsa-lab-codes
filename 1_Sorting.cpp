//Menu driven program to sort an array of integers in 3 ways using a custom header file
#include <stdio.h>
#include "1_Sorting.h"

int main(){
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i=0; i<size; i++){
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }
    printArr(arr,size);
    while (true){
        if (size<1){
            printf("Invalid array size.");
            break;
        }
        else{
            printf("Menu:\n1. Bubble sort\n2. Selection sort\n3. Insertion sort\n4. Exit\n");
            int choice;
            printf("Enter your choice: ");
            scanf("%d", &choice);
            if (choice==4){
                printf("Exiting...\n");
                break;
            }
            switch (choice){
                case 1:
                bubbleSort(arr, size);
                printf("Sorted array: ");
                printArr(arr, size);
                break;
                case 2:
                selectSort(arr, size);
                printf("Sorted array: ");
                printArr(arr, size);
                break;
                case 3:
                insertionSort(arr, size);
                printf("Sorted array: ");
                printArr(arr, size);
                break;
                default:
                printf("Invalid menu code\n");
                break;
            }
        }
    }
}