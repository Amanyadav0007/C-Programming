// Wap to find sum and average of given array...
#include<stdio.h>

int main()
{
    // taking size of array by user
    int size, i, sum=0;
    float avg=0;
    printf("Enter the size of array : ");
    scanf("%d", &size);

    // array declaration & taking inputs
    int arr[size];
    printf("Enter %d element of array : ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // printing array values and calculating sum of array
    printf("Here is your current array : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }

    // calculation average after the sum is computed
    avg = (float) sum / size; 

    // printing answer of sum and average here  
    printf("\nSum of array is : %d and average is : %.2f", sum, avg);

    return 0;
}