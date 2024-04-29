#include<stdio.h>
int main()
{
        int decimalnum, rev = 0, rem;
        printf("Please enter the number to be converted : ");
        scanf("%d",&decimalnum);
        printf("The octal representation of the number provided : %o\n", decimalnum);
        while (decimalnum != 0)
        {
                rem = decimalnum % 8;
                rev = rev * 8 + rem;
                decimalnum = decimalnum / 8;
        }
        printf("The reverse octal representation of the number given : %o\n", rev);
        printf("The double of the reverse octal representation of the number provided : %o\n", rev * 2);
        printf("The decimal representation of the reverse octal representation of the number provided : %d\n", rev * 2);
        return (0);
}
