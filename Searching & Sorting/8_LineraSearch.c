// Linear searching 
#include <stdio.h>

// linear searching function created here
void linearSearch(int arr[], int key, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            printf("Element present at : %d", i);
            return; // this return is blank it means it's return nothing.
        }
    }
    printf("Element not found!");
}

int main()
{
    int n, i;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    // for enter array elements
    int arr[n];
    printf("Enter the array elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // for printing array elements
    printf("Here is the array elements : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n"); // for new line

    int key;
    printf("Enter the element which you want to search in array : ");
    scanf("%d", &key);

    linearSearch(arr, key, n); // searching function call here

    return 0;
}