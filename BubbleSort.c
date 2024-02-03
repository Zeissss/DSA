#include <stdio.h>
// 2 3 1 8 0
int main()
{
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("After Sorting : ");
    for(int i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}
