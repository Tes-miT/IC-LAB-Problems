#include<stdio.h>
int fact(int);
int main()
{
        int num;
        printf("Please enter the number to be done the factorial of : ");
        scanf("%d",&num);
        printf("The result is : %d", fact(num));

        return (0);
}

int fact(f)
{
        int result = 1, i = 1;
        if ( f < 0 )
        {
                return (0); // invaid input
        }
        else
        {
                if ( f < 2 )
                {
                        return (1); // axiom 0! and trivial 1!
                }
                else
                {
                        for ( ; i <= f ; i++)
                        {
                                result = result * i;
                        }
                        return (result);
                }
        }
}
