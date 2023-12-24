// Counting Sort in C...
#include <stdio.h>
#define MAX 255

// Function of counting sort
void countSort(int arr[], int n)
{
    int output[n];
    int count[MAX];
    int max = arr[0];

    // Here we find the largest item in the array
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Now initialize the count for each element in array to 0
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }

    // For each element we store the count
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    
    // Store the cummulative count of each array
    for (int i = 1; i <= max; i++)
    {
        count[i] = count[i] + count[i-1];
    }

    // place items
    for (int i = n-1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    // Transfer the sorted items into actual array
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

// Function to print array
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }  
}

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array element here : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Before sorting array elements are : ");
    printArray(arr, n);
    countSort(arr, n);
    printf("\nAfter sorting array elements are : ");
    printArray(arr, n);
    return 0;
}