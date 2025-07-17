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
        fscanf(f, "%d", &arr[i]);
    fclose(f);
    return 1;
}

int* merge(int* arr, int left, int right, int mid)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int l[n1], r[n2];

    for (int i = 0; i < n1; i++)
        l[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        r[i] = arr[mid + i + 1];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (l[i] <= r[j])
            arr[k++] = l[i++];
        else
            arr[k++] = r[j++];
    }

    while (i < n1)
        arr[k++] = l[i++];
    while (j < n2)
        arr[k++] = r[j++];
}

int* mergeSort(int* arr, int left, int right)
{
    if (left >= right){
        return arr;
    }
    else
    {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, right, mid);
    }
    
    return arr;
}


int main()
{
    int arr[N];
    clock_t start, end;
    double time_taken;

    if (readArrayFromFile("./../Array/best_case_100000.txt", N, arr))
    {
        start = clock();
        mergeSort(arr, 0, N - 1);
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
        mergeSort(arr, 0, N - 1);
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
        mergeSort(arr, 0, N - 1);
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