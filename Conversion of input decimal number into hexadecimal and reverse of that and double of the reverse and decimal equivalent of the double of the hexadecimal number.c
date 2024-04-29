#include<stdio.h>
int main(){
        int decimalnum, rev = 0, rem;
        printf("Please enter the decimal number to be operated on : ");
        scanf("%d",&decimalnum);
        printf("Hex number representation is : %x", decimalnum);
        while(decimalnum != 0)
        {
                rem = decimalnum % 16;
                rev = rev * 16 + rem;
                decimalnum = decimalnum / 16;
        }
        printf("Hexadecimal reverse number is : %x\n", rev);
        printf("Hexadecimal double of the reverse is : %x\n", rev * 2);
        printf("Decimal equivalent of the double of the hexadecimal number is : %d\n", rev * 2);
        return (0);
}
