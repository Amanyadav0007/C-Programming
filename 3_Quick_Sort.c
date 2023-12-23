// Quick Sort in C when pivot point on start position....
// here start == i, end == j

#include <stdio.h>

int partition(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    int temp;
    while (start < end)
    {
        // while (start <= ub && a[start] <= pivot)
        while (a[start] <= pivot)
        {
            start++;
        }
        // while (end >= lb && a[end] > pivot)
        while (a[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            // a[start] = a[end]; for swapping...
            temp = a[start];
            a[start] = a[end];
            a[end] = temp;
        }
    }
    // a[lb] = a[end]; for swapping...
    temp = a[lb];
    a[lb] = a[end];
    a[end] = temp;
    return end;
}

void Quick_sort(int a[], int lb, int ub)
{
    int loc;
    if (lb < ub)
    {
        loc = partition(a, lb, ub);
        Quick_sort(a, lb, loc - 1);
        Quick_sort(a, loc + 1, ub);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int a[n]; // Declare an array of size n
    printf("Enter the elements of the array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Display the original array
    printf("Here is the original array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    // Apply quicksort
    Quick_sort(a, 0, n-1);

    // Display the sorted array
    printf("\nArray after sorting : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    

    return 0;
}
