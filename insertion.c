// Insertion : adding a new element into a data structure at a specific position.

#include <stdio.h>

    // Code for Traversing

void displayArr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("\n%d", arr[i]);
    }
    
}

    // Code for Insertion

int indInsertion(int arr[], int size, int element, int capacity, int index){

        if(size>=capacity){
            return -1;
        } 
            for(int i = size-1; i >= index; i--){

                arr[i+1] = arr[i];
            }
            arr[index] = element;

            return 1;
        }


int main(){

    int arr[100] = {12,24,36,60};
    int size =4, element = 48, index =3 ;

    printf("Before Insertion : ");

    displayArr(arr, size);

    printf("\n After Insertion :  ");

    indInsertion(arr, size, element, 100, index);
    size++;

    displayArr(arr, size);

    return 0;
}
