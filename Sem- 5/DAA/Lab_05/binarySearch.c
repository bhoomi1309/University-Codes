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

int binarySearch(int arr[], int target)
{
    int start = 0;
    int end = N - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int binarySearchRecursion(int arr[], int target, int start, int end)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            return binarySearchRecursion(arr, target, start, mid - 1);
        }
        else
        {
            return binarySearchRecursion(arr, target, mid + 1, end);
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
        index = binarySearchRecursion(arr, arr[0], 0, N-1);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("Best Case: %f", time_taken);

        start = clock();
        index = binarySearchRecursion(arr, arr[N/2], 0, N-1);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("\nAverage Case: %f", time_taken);

        start = clock();
        index = binarySearchRecursion(arr, arr[N-1], 0, N-1);
        end = clock();
        time_taken = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
        printf("\nWorst Case: %f", time_taken);
    }
}