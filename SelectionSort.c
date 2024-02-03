
void print(int* A, int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t", A[i]);
    }
}

void SelectionSort(int* A, int n)
{
    for(int i=0; i<n-1; i++)
    {
        int index = i;
        
        for(int j=i+1; j<n; j++)
        {
            if(A[index] > A[j])
            {
                index = j;
            }
        }
        int temp = A[i];
        A[i] = A[index];
        A[index] = temp;
    }
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d", &n);
    int A[n];
    printf("\nEnter the elements : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Before Sorting : ");
    print(A, n);
    SelectionSort(A, n);
    printf("\nAfter Sorting : ");
    print(A, n);
    

    return 0;
}
