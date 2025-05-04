#include <stdio.h>
#include "sort.h"

//Linear Search
int linearSearch(int arr[], int size, int target) {
    for (int i=0; i<size; i++) {
        if (arr[i]==target) {
            return i;
        }
    }
    return -1;
}

//Binary Search
int binarySearch(int arr[], int size, int target) {
    int low = 0, high=size-1;
    while (low<=high) {
        int mid=low+(high-low)/2;
        if (arr[mid]==target)
            return mid;
        if (arr[mid]<target)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

int main() {
    int arr[100], size, target, choice, result;
    printf("Enter the number of elements: ");
    scanf("%d", &size);
    printf("Enter the elements: ");
    for (int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\nMenu:\n1. Linear Search\n2. Binary Search\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to search: ");
                scanf("%d", &target);
                result = linearSearch(arr, size, target);
                if (result==-1) {
                    printf("Element not found.\n");
                } else {
                    printf("Element found at index %d\n", result-1);
                }
                break;
            case 2: {
                bubbleSort(arr, size);
                printf("Enter the element to search: ");
                scanf("%d", &target);
                result = binarySearch(arr, size, target);
                if (result==-1) {
                    printf("Element not found.\n");
                } else {
                    printf("Element found at index %d\n", result-1);
                }
                break;
            }
            case 3: 
                printf("Exiting...\n");
                break;
            default: 
                printf("Invalid choice.\n");
        }
    } while (choice!=3);
    return 0;
}