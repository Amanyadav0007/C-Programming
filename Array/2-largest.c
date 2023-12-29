// WAP to find largest number in Array

#include<stdio.h>

int findLargestElement(int arr[], int n)
{
    if (n <= 0)
    {
        printf("Invalid array sizehljhk!!\n");
        return -1;
    }
    
    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Invalid array size!!\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d elements for the array : ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int largest = findLargestElement(arr, n);

    printf("Largest element is : %d", largest);
    
    return 0;
}