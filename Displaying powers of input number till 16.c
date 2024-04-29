#include<stdio.h>
int main()
{
int data;
int i = 0;
printf("Please enter number : ");
scanf("%d", &data);

if (data > 0){
        while (i < 16){
                printf("The result : %d \n", data);
                data = data << 1;
                i = i + 1;
        }
}

else{
        printf("Please enter positive number");
}

return 0;

}
