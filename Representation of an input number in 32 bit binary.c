#include<stdio.h>
int main()
{
        int num, binary = 0, i = 0, exp = 0;
        int arr[32] = {};
        printf("Please enter your number : ");
        scanf("%d",&num);

        while (num!=0)
        {
                while (((i*2)!=num) && ((i*2)!=(num-1)))
                {
                        i = i + 1;
                }
                if ((i*2) == (num-1))
                {
                arr[(31-exp)] = 1;
                }
                num = i;
                i = 0;
                exp = exp + 1;
        }
        for (i=0; i<32; i++)
        {
                printf("%d", arr[i]);
        }

        return (0);
}
