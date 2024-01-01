// WAP to find a element in array...
#include<stdio.h>

int main()
{
    // taking size of array by user
    int size, i, searchElement;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    // array declaration & taking inputs
    int arr[size];
    printf("Enter %d element of array : ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    // printing array values 
    printf("Here is array elements : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    // input element to search
    printf("\nEnter the element to search : ");
    scanf("%d", &searchElement);

    // search for element in the array
    int found = 0;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == searchElement)
        {
            found = 1;
            break; // whenever element found, exit form loop
        }
    }

    // print the result if element found or not
    if (found==1)
    {
        printf("%d is present in the array at index %d\n", searchElement, i);
    }
    else
    {
        printf("%d element not found in the array!\n", searchElement);
    }
    
    return 0;
}