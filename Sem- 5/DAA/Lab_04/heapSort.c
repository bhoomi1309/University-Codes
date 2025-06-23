#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

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

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}

int *heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
    return arr;
}

int main()
{
    int arr[N];
    clock_t start, end;
    double time_taken;

    if (readArrayFromFile("./../Array/best_case_100.txt", N, arr))
    {
        start = clock();
        heapSort(arr, N);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Best Case: %f", time_taken);
        // printf("\nArray: ");
        // for(int i=0;i<N;i++){
        //     printf("%d ",arr[i]);
        // }
    }

    if (readArrayFromFile("./../Array/average_case_100.txt", N, arr))
    {
        start = clock();
        heapSort(arr, N);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("\nAverage Case: %f", time_taken);
        // printf("\nArray: ");
        // for (int i = 0; i < N; i++)
        // {
        //     printf("%d ", arr[i]);
        // }
    }

    if (readArrayFromFile("./../Array/worst_case_100.txt", N, arr))
    {
        start = clock();
        heapSort(arr, N);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("\nWorst Case: %f", time_taken);
        // printf("\nArray: ");
        // for(int i=0;i<N;i++){
        //     printf("%d ",arr[i]);
        // }
    }
}