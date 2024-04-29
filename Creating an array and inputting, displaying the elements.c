#include<stdio.h>
int main()
{
        int n, i = 0;
        int arr[50];
        printf("Please enter how many numbers you want to add to the array : ");
        scanf("%d",&n);
        for ( ; i < n; i++)
        {
                printf("Please enter your number : ");
                scanf("%d",&arr[i]);
        }
        for (i = 0; i < n; i++)
        {
                printf("The element %d in the array : %d\n", i+1, arr[i]);
        }
        return(0);
}
