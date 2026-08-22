// Deletion : the process of removing an element from a data structure at a specific position.

#include <stdio.h>


    // Code for Traversing

    void displayArr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("\n%d", arr[i]);
    }
}

    // Code for Deletion

    int indDeletion(int arr[], int index, int size, int capacity){
        for(int i = index; i <= size; i++){
            arr[i] = arr[i+1];
        }
        
    }


    int main(){

        int arr[100] = {10,20,30,40,50};
        int size = 5, index = 2 ;

        printf("Before Deletion : ");
        displayArr(arr,size);

            indDeletion(arr, index, size, 100);
            size--;


        printf("\nAfter Deletion : ");
        displayArr(arr,size);



        
        return 0;
    }