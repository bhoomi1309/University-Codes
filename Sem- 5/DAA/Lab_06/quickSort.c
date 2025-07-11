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

int partition(int arr[], int i, int j)
{
    int pivot = arr[i];
    int k = i + 1;
    int l = j;
    while (k <= j && arr[k] <= pivot)
    {
        k += 1;
    }
    while (l > i && arr[l] > pivot)
    {
        l -= 1;
    }
    while (k < l)
    {
        int temp = arr[k];
        arr[k] = arr[l];
        arr[l] = temp;
        k += 1;
        while (k <= j && arr[k] <= pivot)
        {
            k += 1;
        }
        l -= 1;
        while (l > i && arr[l] > pivot)
        {
            l -= 1;
        }
    }
    int temp = arr[i];
    arr[i] = arr[l];
    arr[l] = temp;
    return l;
}

int *quickSort(int arr[], int i, int j)
{
    if (j - i < 1)
    {
        return arr;
    }
    if (i < j)
    {
        int p = partition(arr, i, j);
        quickSort(arr, i, p - 1);
        quickSort(arr, p + 1, j);
    }
}

int main()
{
    int arr[N];
    clock_t start, end;
    double time_taken;

    if (readArrayFromFile("./../Array/best_case_100000.txt", N, arr))
    {
        start = clock();
        quickSort(arr, 0, N - 1);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Best Case: %f", time_taken);
        // printf("\nArray: ");
        // for (int i = 0; i < N; i++)
        // {
        //     printf("%d ", arr[i]);
        // }
    }

    if (readArrayFromFile("./../Array/average_case_100000.txt", N, arr))
    {
        start = clock();
        quickSort(arr, 0, N - 1);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("\nAverage Case: %f", time_taken);
        // printf("\nArray: ");
        // for (int i = 0; i < N; i++)
        // {
        //     printf("%d ", arr[i]);
        // }
    }

    if (readArrayFromFile("./../Array/worst_case_100000.txt", N, arr))
    {
        start = clock();
        quickSort(arr, 0, N - 1);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("\nWorst Case: %f", time_taken);
        // printf("\nArray: ");
        // for (int i = 0; i < N; i++)
        // {
        //     printf("%d ", arr[i]);
        // }
    }
}