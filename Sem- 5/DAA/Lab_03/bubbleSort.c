#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000

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

int* bubbleSort(int arr[], int n){
    int swapped;
    for(int i=0;i<n-1;i++){
        swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
    return arr;
}

int main(){
    int arr[N];
    clock_t start,end;
    double time_taken;

    if(readArrayFromFile("./../Array/best_case_1000.txt", N, arr)){
        start=clock();
        bubbleSort(arr,N);
        end=clock();
        time_taken=((double)(end-start))/CLOCKS_PER_SEC*1000;
        printf("Best Case: %f",time_taken);
        // printf("\nArray: ");
        // for(int i=0;i<N;i++){
        //     printf("%d ",arr[i]);
        // }
    }

    if(readArrayFromFile("./../Array/average_case_1000.txt", N, arr)){
        start=clock();
        bubbleSort(arr,N);
        end=clock();
        time_taken=((double)(end-start))/CLOCKS_PER_SEC*1000;
        printf("\nAverage Case: %f",time_taken);
        // printf("\nArray: ");
        // for(int i=0;i<N;i++){
        //     printf("%d ",arr[i]);
        // }
    }

    if(readArrayFromFile("./../Array/worst_case_1000.txt", N, arr)){
        start=clock();
        bubbleSort(arr,N);
        end=clock();
        time_taken=((double)(end-start))/CLOCKS_PER_SEC*1000;
        printf("\nWorst Case: %f",time_taken);
        // printf("\nArray: ");
        // for(int i=0;i<N;i++){
        //     printf("%d ",arr[i]);
        // }
    }
}