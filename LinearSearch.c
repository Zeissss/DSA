int Linear(int n, int A[], int target)
{
    
    for(int i=0; i<n; i++)
    {
        if(A[i] == target)
        {
            return i;
        }
    }
    
    return -1;
}


#include <stdio.h>

int main()
{
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d", &n);                                
    int A[n];
    printf("\nEnter the elements : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    
    int target; 
    printf("Enter target elements : ");
    scanf("%d", &target);
    
    int result = Linear(n, A, target);
    if(result == -1)
    {
        printf("%d not found", target);
    }
    
    else
    {
        printf("%d found at index %d", target, result);
    }
    
}
