#include<stdio.h>
#include <stdlib.h>

void quicksort(double* arr,int,int);
int main(int argc, char* argv[]){
    int n;

    printf("\nInput number of elements:  ");
    scanf(" %d",&n);

    double* arr = malloc(n* sizeof (double));

    printf("\nInput values one by one: ");
    for(int i=0;i<n;i++) {
        scanf(" %lf", &arr[i]);
    }

    int l=0; // smallest index
    int r=n-1; // highest index

    quicksort(arr,l,r);

    printf("\nThe quick sorted array is:  ");
    for(int i=0;i<n;i++)
        printf(" %lf",arr[i]);
    printf("\n");
}
void quicksort(double* arr, int low, int high){
    int left, right;
    double temp, pivot;
    if(low>=high){ //abbruchbedingung
        return;
    }else{
        pivot=arr[low];
        right=low+1;
        left = high;

        while(right<=left){
            while(arr[right] < pivot && right <= high){
                right ++;
            }
            while(arr[left] > pivot && left > low){
                left--;
            }
            if(right<left){ //switch elements
                temp=arr[right];
                arr[right]=arr[left];
                arr[left]=temp;
                right++;
                left--;
            }
        }
        arr[low]=arr[left];
        arr[left]=pivot;
        quicksort(arr,low,left-1); //left side of pivot
        quicksort(arr,left+1,high); // right side of pivot
    }
}

