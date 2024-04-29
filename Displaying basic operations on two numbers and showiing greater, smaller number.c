#include<stdio.h>
int main()
{
        int first,p1,p2,p3, second,p4,p5,p6;
        printf("Please enter 2 numbers : ");
        scanf("%d%d", &first, &second);
        int sum = first + second;
        int subtraction = first - second;
        int multiplication = first * second;
        int division = first / second;
        int greater = first >> second;
        int smaller = first << second;

        printf("\n\nSum is %d", sum);
        printf("\n\nSubtraction is %d", subtraction);
        printf("\n\nMultiplication is %d", multiplication);
        printf("\n\nDivision is %d", division);
        printf("\n\nAnswer is : %d", greater);
        printf("\n\nAnswer is ; %d", smaller);

        return 0;
}
