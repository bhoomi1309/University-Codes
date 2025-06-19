#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int readArrayFromFile(const char *filename, int n, int arr[]){
    FILE *f = fopen(filename, "r");
    if(!f){
        printf("No File Found");
        return 0;
    }
    for(int i=0;i<n;i++){
        fscanf(f,"%d",&arr[i]);
    }
    fclose(f);
    return 1;
}

int* insertionSort(int arr[], int n){
    int j,key;
    for(int i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    return arr;
}

int main(){
    int arr[N];
    clock_t start,end;
    double time_taken;

    if(readArrayFromFile("./../Array/best_case_100.txt", N, arr)){
        start=clock();
        insertionSort(arr,N);
        end=clock();
        time_taken=((double)(end-start))/CLOCKS_PER_SEC*1000;
        printf("Best Case: %f",time_taken);
        // printf("\nArray: ");
        // for(int i=0;i<N;i++){
        //     printf("%d ",arr[i]);
        // }
    }

    if(readArrayFromFile("./../Array/average_case_100.txt", N, arr)){
        start=clock();
        insertionSort(arr,N);
        end=clock();
        time_taken=((double)(end-start))/CLOCKS_PER_SEC*1000;
        printf("\nAverage Case: %f",time_taken);
        // printf("\nArray: ");
        // for(int i=0;i<N;i++){
        //     printf("%d ",arr[i]);
        // }
    }

    if(readArrayFromFile("./../Array/worst_case_100.txt", N, arr)){
        start=clock();
        insertionSort(arr,N);
        end=clock();
        time_taken=((double)(end-start))/CLOCKS_PER_SEC*1000;
        printf("\nWorst Case: %f",time_taken);
        // printf("\nArray: ");
        // for(int i=0;i<N;i++){
        //     printf("%d ",arr[i]);
        // }
    }
}