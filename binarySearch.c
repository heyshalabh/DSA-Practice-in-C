// Searching : 

//Binary Searching : 

#include<stdio.h>

    int binarySearch(int arr[], int size, int element){
        int low, mid, high;
        low = 0;
        high = size-1;

        

        while(low<=high){

            mid = (low+high)/2;


       if(arr[mid] == element){
        return mid;

       }
       if(arr[mid]<element){
            low = mid+1;
       }
       else{
        high = mid-1;
       }

       }

       return -1;
    }

    int main(){
        int arr[] = {10,20,30,44,55,66,77,88,99};
        int size = sizeof(arr)/sizeof(int);
        int element = 77;

        int search = binarySearch(arr,size,element);
        printf("Element %d found at Index :  %d ", element, search);



        return 0;
    }
