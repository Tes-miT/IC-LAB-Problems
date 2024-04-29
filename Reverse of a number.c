#include<stdio.h>
int main(){
        int num, rev = 0, rem, result;
        printf("Please enter the number to be operated on : ");
        scanf("%d",&num);
        while (num!=0)
        {
                rem = num % 10;
                rev = rev * 10 + rem;
                num = num / 10;
        }
        result = rev * 2;
        printf("The result is : %d", result);
        return (0);
}
