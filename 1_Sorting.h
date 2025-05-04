//header file containing all the sorting functions.
#include <stdio.h>

int bubbleSort(int *arr, int size){
    void swap(int *element1Ptr, int *element2Ptr);
    for (int i=0; i<size-1; i++){
        for (int j=0; j<size-i-1; j++){
            if (arr[j]>arr[j+1]){
                swap(&(arr[j]),&(arr[j+1]));
            }
        }
    }
}

int selectSort(int *arr, int size){
    void swap(int *element1Ptr, int *element2Ptr);
    for (int i=0; i<size-1; i++){
        int smallest=i;
        for (int j=i+1; j<size; j++){
            if (arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        swap(&arr[smallest],&arr[i]);
    }
}

int insertionSort(int *arr, int size){
    void swap(int *element1Ptr, int *element2Ptr);
    for (int i=1; i<size; i++){
        int j=i;
        while (j>0 && arr[j-1]>arr[j]){
            swap(&arr[j],&arr[j-1]);
            j--;
        }
    }
}

void swap(int *element1Ptr, int *element2Ptr){
    int temp= *element1Ptr;
    *element1Ptr=*element2Ptr;
    *element2Ptr=temp;
}

void printArr(int arr[], int size){ //prints the array
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    puts("");
}