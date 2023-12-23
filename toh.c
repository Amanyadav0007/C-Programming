// Here we try to find tower of hanoi program in c
// forumula : 2^n - 1

#include<stdio.h>

void towerOfHanoi(int n, char source, char auxilary, char target)
{
    if (n==1)
    {
        printf("Move disk 1 from %c to %c\n", source, target);
        // here we use %c for char data type
        return;
    }
    towerOfHanoi(n - 1, source, target, auxilary);
    printf("Move disk %d from %c to %c\n", n, source, target);
    towerOfHanoi(n - 1, auxilary, source, target);
}

int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}