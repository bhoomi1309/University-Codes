#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100000

int readArrayFromFile(const char *filename, int n, int arr[])
{
    FILE *f = fopen(filename, "r");
    if (!f)
    {
        printf("No File Found");
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        fscanf(f, "%d", &arr[i]);
    }
    fclose(f);
    return 1;
}

int linearSearch(int arr[], int target){
    for(int i=0;i<N;i++){
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[N];
    clock_t start, end;
    double time_taken;
    int index = -1;

    if (readArrayFromFile("./../Array/best_case_100000.txt", N, arr))
    {
        start = clock();
        index = linearSearch(arr, arr[0]);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Best Case: %f", time_taken);

        start = clock();
        index = linearSearch(arr, arr[N/2]);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("\nAverage Case: %f", time_taken);

        start = clock();
        index = linearSearch(arr, arr[N-1]);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("\nWorst Case: %f", time_taken);
    }
}